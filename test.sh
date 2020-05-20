REPORT_FILE=test_output.txt

echo "PARSER TEST OUTPUT:" > $REPORT_FILE

echo "Testing valid files:"
for file in "valid_files"/*
do
    echo "\n* $file" >> $REPORT_FILE
    ./compiler $file >> $REPORT_FILE 2>&1
    ret=$?
    if (( ret != 0 ))
    then 
        echo "* $file: invalid"
    else
        echo "* $file: valid"
    fi
done

echo "\nTesting invalid files:"
for file in "invalid_files"/*
do
    echo "\n* $file" >> $REPORT_FILE
    ./compiler $file >> $REPORT_FILE 2>&1
    ret=$?
    if (( ret != 0 ))
    then 
        echo "* $file: invalid"
    else
        echo "* $file: valid"
    fi
done