#Usage awk -f p8.awk [fnames]
#turning strings into numbers
BEGIN { x=(4 + "26") + "hello"
        y=("4" "26") - "25"
        print "x:",x,"y:",y
}

