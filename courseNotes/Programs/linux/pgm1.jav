import java.awt.Frame;
import java.applet.Applet;
import java.awt.Button;
import javax.accessibility.*;

public class AccessApplet extends Applet {
   public static void main (String args[]) {
      Framer f = new Framer("Accessible Applet");
      f.setSize(300, 100);
      f.show ();
  }
}    

class Framer extends Frame {
    public Framer(String title) {
        super(title);
        AccessApplet applet = new AccessApplet();
        applet.start();
        add (applet, "Center");
         String descapplet = 
                      "This is a simple applet";    
        applet.getAccessibleContext().                    
          setAccessibleDescription(descapplet);   
        applet.add(aButton);
    }
    
}

