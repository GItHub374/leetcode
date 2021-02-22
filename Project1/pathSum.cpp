/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include "common.h"

class Solution {
public:
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		vector<vector<int>> res;
		if (sum == 0)
		{
			return res;
		}
		m_sum = sum;
		int num = 0;
		dfs(root, num, res);
		return res;
	}

	void dfs(TreeNode* root, int num, vector<vector<int>>& res)
	{		
		if (root == NULL)
		{
			return;
		}
		if (num + root->val == m_sum)
		{
			temp.push_back(root->val);
			res.push_back(temp);
			temp.pop_back();
			return;
		}
		else if (num + root->val < m_sum)
		{
			num += root->val;
			temp.push_back(root->val);
		}
		else if (num + root->val > m_sum)
		{
			return;
		}
		dfs(root->left, num, res);
		dfs(root->right, num, res);
		temp.pop_back();
		num -= root->val;
	}
	vector<int> temp;
	int m_sum;
};