class Solution {
public:
    Node* connect(Node* root) 
    {
        if(root==NULL)
        {
            return NULL;
        }
        vector<vector<Node*>> level;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int k=q.size();
            vector<Node*> a;
           while(k--)
            {
              auto it=q.front();
                a.push_back(it);
              q.pop();
              if(it->left!=NULL)
              {
                  q.push(it->left);
              }
              if(it->right!=NULL)
              {
                  q.push(it->right);
              }
            }
            level.push_back(a);
        }

        for(auto it:level)
        {
            int n=it.size();
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                {
                  it[i]->next=NULL;
                }
                else
                {
                    it[i]->next=it[i+1];
                }
            }
        }
        return root;
        
    }
};