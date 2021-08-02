set(ANTLR_EXECUTABLE ${PROJECT_SOURCE_DIR}/antlr/bin/antlr-4.9.1-complete.jar)
set(ANTLR4_BIN ${PROJECT_SOURCE_DIR}/antlr/bin/antlr-4.9.2-complete.jar)

add_custom_target(grammar
  COMMAND java -Xmx500M -cp ${ANTLR4_BIN}:$$CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp ${PROJECT_SOURCE_DIR}/grammar/GenieLexer.g4  ${PROJECT_SOURCE_DIR}/grammar/GenieParser.g4 -o ${ANTLR_OUT_PATH})
