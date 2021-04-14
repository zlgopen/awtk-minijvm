MINI_JVM_ROOT=../..
BIN_DIR=$MINI_JVM_ROOT"/binary"
MINI_JVM=$BIN_DIR"/"$PLATFORM"/mini_jvm"

BOOTCLASSPATH=$BIN_DIR/lib/minijvm_rt.jar
CLASSPATH=$CLASSPATH":"$BIN_DIR/libex/awtk_gui.jar
CLASSPATH=$CLASSPATH":"$BIN_DIR/libex/awtk_demos.jar
OPTIONS=

cp -fv ../../binary/$PLATFORM/libawtk-jni.* .

echo $MINI_JVM $OPTIONS -cp $CLASSPATH DemoBasic
$MINI_JVM $OPTIONS -bootclasspath $BOOTCLASSPATH -cp $CLASSPATH DemoBasic
