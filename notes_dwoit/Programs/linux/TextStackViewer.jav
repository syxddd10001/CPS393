//********************************************************************
//  TextStackViewer.java       Author: Sophie Quigley
//
//  Class TextStackViewer shows a transparent stack and its contents.
//  This class is a subclass of StackViewer
//
//********************************************************************

public class TextStackViewer extends StackViewer
{
    private int maxdisplaysize; // maximum number of top stack entries shown

    public TextStackViewer (VisibleStack stack, int maxdisplaysize)
    {
        super(stack);
        this.maxdisplaysize = maxdisplaysize;
    }

    // The Display method overriddes the Display method in StackViewer.
    public void display()
    {
        int i;
        int size = super.stack.currentSize();

//        System.out.println("\n+------ Top -------");
//        for (i=size-1; i>size-1-maxdisplaysize && i>=0; i--)
//            System.out.println("| "+super.stack.element(i).toString());
//        if (i>=0)
//        {
//            System.out.println("| ..More elements..");
//        }
//        System.out.println("+---- Bottom ------\n");

    }
}