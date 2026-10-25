class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;

        // order of the if else statement is important
        for(const string& op : operations)
        {
            if(op == "D")
            {
                // top just gives a peak it doesnt pop it 
                int doubledScore = record.top() * 2;
                record.push(doubledScore);
            }
            else if(op == "C")
            {
                record.pop();
            }
            else if(op == "+")
            {
                int topVal = record.top();
                record.pop();
                int secondTop = record.top();
                record.push(topVal);
                record.push(topVal + secondTop);
            }
            else 
            {
                record.push(stoi(op));
            }
        }

        int sum = 0; 
        while(!record.empty())
        {
            sum += record.top();
            // pop here is important
            record.pop();
        }   

        return sum;
    }
};