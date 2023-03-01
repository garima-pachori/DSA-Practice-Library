class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = ""; 
            // Initialize an empty string to store the result
        int count = 0; 
            // Initialize a count variable to keep track of the number of              opening parentheses
        for (char c : s) { 
                // Iterate through each character in the                                  string s
            if (c == '(' && ++count > 1) { 
                    // If the current character is an opening parenthesis                       and the count is greater than 1 (i.e., this is not                      the outermost opening parenthesis)
                res += c; // Append the current character to the result string
            }
            if (c == ')' && --count > 0) { 
                    // If the current character is a closing parenthesis                        and the count is greater than 0 (i.e., this is not                        the outermost closing parenthesis)
                res += c; 
                    // Append the current character to the result string
            }
        }
        return res; // Return the result string
    }
};