int is_a_palindrome(int integers[], int length){
    int if_palindrome = -2;
    int length_copy = length;
    int false_value = -1;

    if(length<0){
        return false_value;

    for(int i=0; i<length; i++, length_copy--){
        if(integers[i] == integers[length_copy]){
            if_palindrome = 1;
        }
    }
    return if_palindrome;
    }
}

int sum_elements(int integers[], int length){
    int sum_array=0;
    int false_value = -1;

    if(length<0){
        return false_value;
    }
    for(int i=0; i<length; i++){
        sum_array += integers[length];
    }
}

int sum_if_a_palindrome(int integers[], int length){

}
