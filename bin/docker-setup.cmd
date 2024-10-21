// #Sireum

import org.sireum._

val content: ST = 
  st"""FROM trustworthysystems/camkes
      |
      |WORKDIR /root
      |
      |ENV SIREUM_HOME=/root/Sireum
      |ENV PATH="$$SIREUM_HOME/bin:$$PATH"
      |
      |RUN git config --global user.email "" &&\
      |    git config --global user.name "" &&\
      |    git config --global color.ui false &&\
      |    mkdir camkes && cd camkes &&\
      |    repo init -u https://github.com/seL4/camkes-manifest.git &&\
      |    repo sync &&\
      |    cd &&\
      |    (export SIREUM_NO_SETUP=true && DIR=Sireum && export SIREUM_V=master && rm -fR $$DIR && mkdir -p $$DIR/bin && cd $$DIR/bin && curl -JLso init.sh https://raw.githubusercontent.com/sireum/kekinian/$$SIREUM_V/bin/init.sh && bash init.sh)
      |"""


val dockerDir = Os.tempDir()
val dockerFile = dockerDir / "Dockerfile"
dockerFile.write(content.render)

proc"docker build -t sireum.container .".at(dockerDir).console.runCheck()
