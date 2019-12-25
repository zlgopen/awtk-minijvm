MINI_JVM_ROOT=../..
BIN_DIR=$MINI_JVM_ROOT"/binary"
MINI_JVM=$BIN_DIR"/"$PLATFORM"/mini_jvm"

CLASSPATH=$BIN_DIR/lib/minijvm_rt.jar
CLASSPATH=$CLASSPATH":"$BIN_DIR/libex/janino.jar
CLASSPATH=$CLASSPATH":"$BIN_DIR/libex/awtk_gui.jar
CLASSPATH=$CLASSPATH":"$BIN_DIR/libex/awtk_demos.jar
OPTIONS="-Djava.library.path " $BIN_DIR"/"$PLATFORM

cp -fv ../../binary/$PLATFORM/libawtk-jni.* .

echo $MINI_JVM $OPTIONS -cp $CLASSPATH DemoButton
$MINI_JVM $OPTIONS -cp $CLASSPATH DemoBasic
