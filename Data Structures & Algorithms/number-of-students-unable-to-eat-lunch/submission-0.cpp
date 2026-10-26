#include <deque>

class Solution 
{
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        deque<int> studs(students.begin(), students.end());
        deque<int> sands(sandwiches.begin(), sandwiches.end());

        int rejected = 0;

        while(!studs.empty() && rejected < studs.size())
        {
            if(studs.front() == sands.front())
            {
                studs.pop_front();
                sands.pop_front();
                rejected = 0;
            }
            else // put the student back in the queue
            {
                int student = studs.front();
                studs.pop_front();
                studs.push_back(student);

                ++rejected;
            }
        }
        
        return rejected;
    }
};