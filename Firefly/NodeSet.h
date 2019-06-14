#pragma once
#include <unordered_set>
#include <memory>

namespace mth {

	template <class Node>
	class NodeSet : public std::unordered_set<Node> {
	public:
		using This = NodeSet;
		using Base = std::unordered_set<Node>;
		
		using Base::Base;
		using Ptr = std::shared_ptr<This>;

	};

}