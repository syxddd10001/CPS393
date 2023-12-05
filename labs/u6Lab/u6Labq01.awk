BEGIN{blankcount=0
    }

{
    if (length() == 0){
        blankcount=blankcount+1;        
    }
}

END{print("Input File " FILENAME " has " blankcount " lines out of " NR  " total lines")
    }
