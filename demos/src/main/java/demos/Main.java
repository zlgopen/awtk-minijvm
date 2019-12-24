import awtk.*;

class Main {
  public static void main(String[] args) {
    DemoUI.init(args);
    DemoUI.createUI();

    AWTK.run();
  }

  static {
    System.loadLibrary("awtk-jni");
  }
}
