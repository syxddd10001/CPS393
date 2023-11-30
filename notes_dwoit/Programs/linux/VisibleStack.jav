//********************************************************************
//  VisibleStack.java       Author: Sophie Quigley
//
//  VisibleStack implements a stack which can have zero or more viewers
//
//********************************************************************

import java.util.ArrayList;

public class VisibleStack
{
    public TransparentStack stack;                 // Transparent stack used to implement visible stack
    private ArrayList viewers = new ArrayList();    // List of viewers for this visible stack
    private int totalviewers = 0;                   // Total number of registered viewers for this stack

    public Object element(int i) {
        return stack.element(i);
    }

    // VisibleStack constructs a new stack of initial capacity initialcapacity
    public VisibleStack (int initialcapacity)
    {
        stack = new TransparentStack(initialcapacity);
    }

    // When no initial size is specified, VisibleStack lets the transparent stack pick the initial capacity.
    public VisibleStack ()
    {
        stack = new TransparentStack();
    }

    // AddViewer will add a viewer for the stack.
    // It also starts that viewer
    public void addViewer( StackViewer viewer)
    {
        viewer.initialize(stack);
        viewer.display();
        viewers.add(viewer);
        totalviewers++;
    }

    // DeleteViewer will delete all the instances of one of the viewers for this stack.
    public void deleteViewer (StackViewer viewer)
    {
        for (int i=totalviewers-1; i>=0; i--)
            if (viewers.get(i) == viewer)
                viewers.remove(i);
    }

    // Push pushes an object and updates all the viewers.
    public void push (Object element)
    {
        stack.push (element);
        displayAll();
    }

    // Pop pops an object and updates all the viewers.
    public Object pop()
    {
        Object element = stack.pop();
        displayAll();
        return element;
    }

    // Top updates all displays to emphasize the top element, and also returns that top
    public Object top()
    {
        for (int i=0; i<totalviewers; i++)
            ((StackViewer)viewers.get(i)).showTop();
        return stack.top();
    }

    // empty() is the same method as for transparent stacks.
    public boolean empty()
    {
        return stack.empty();
    }

    // displayAll updates all displays of the stack
    private void displayAll()
    {
        for (int i=0; i<totalviewers; i++)
            ((StackViewer)viewers.get(i)).display();
    }
}