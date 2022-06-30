#include "iostream"
#include "vector"
#include "unordered_set"
#include "queue"

class Solution
{
public:
    int ladderLength(std::string, std::string, std::vector<std::string> &);
};

int main()
{
    std::vector<std::string> v = {"hot", "dot", "dog", "lot", "log", "cog"};
    Solution s;
    std::cout << s.ladderLength("hit", "cog", v) << '\n';
    return 0;
}

int Solution::ladderLength(std::string beginWord, std::string endWord, std::vector<std::string> &wordList)
{
    /* Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
    Output: 0
    Explanation: The endWord "cog" is not in wordList, therefore there is no valid transformation sequence. */
    // 1.
    // 2.
    // 3.
    // 4.

    std::unordered_set<std::string> words(wordList.begin(), wordList.end());
    auto found = words.find(endWord);
    if (found == words.end())
        return 0;

    int length = 0;
    std::queue<std::string> steps({beginWord});
    while (steps.size() > 0)
    {
        length++;
        int size = steps.size();
        for (int i = 0; i < size; i++) // O(n)
        {
            auto word = steps.front();
            steps.pop();

            if (word == endWord)
                return length;

            for (int i = 0; i < word.length(); i++) // O(10)
            {
                for (auto j = 'a'; j <= 'z'; j++) // O(27)
                {
                    auto word_copy = word;
                    word_copy[i] = j;
                    if (words.find(word_copy) != words.end())
                    {
                        steps.push(word_copy);
                        words.erase(word_copy);
                    }
                }
            }
        }
    }

    return 0;
}