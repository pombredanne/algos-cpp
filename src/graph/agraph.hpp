#include <vector>
#include <unordered_map>


template<typename Node>
class AbstractGraph {
public:
    using Nodes = std::vector<Node>;
    using Edges = std::unordered_map<Node, Nodes>;
protected:
    Edges edges;
public:
    AbstractGraph () : edges(Edges()) {};
    AbstractGraph (Edges edges) : edges(edges) {}

    virtual void add_edge(Node n1, Node n2) = 0;
    virtual void del_edge(Node n1, Node n2) = 0;

    Nodes &at(const Node &node) {
        return this->edges.at(node);
    }
};