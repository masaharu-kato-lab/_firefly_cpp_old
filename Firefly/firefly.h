#pragma once
#include "Permutation.h"
#include <vector>
#include <functional>

namespace mth {

	template <class Node, class Value>
	class FireflyAlgorithm {
	private:
		struct NodeAndValue {
			Node node;
			Value value;
		};

		using Firefly = Permutation<Node>;

		std::vector<Firefly> ffs;
		std::vector<NodeAndValue> nodes;

		std::function<Value(const Permutation<Node>&)> node_func;

	public:
		void calcNodeValues() {
			for(const auto& node : nodes) {
				node.value = node_func(node.node);
			}
		};

		void forEachFFPair(std::function<void(const Firefly&, const Firefly&)> func) {

		}
	};

}