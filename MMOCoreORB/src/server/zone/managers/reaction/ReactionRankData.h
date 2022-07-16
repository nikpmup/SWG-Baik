
#ifndef REACTIONRANKDATA_H_
#define REACTIONRANKDATA_H_

namespace server {
namespace zone {
namespace managers {
namespace reaction {

class ReactionRankData : public Object {
protected:
	int minRank, maxRank;
	String templateName;

public:
	ReactionRankData(String name, int min, int max) : Object() {
		templateName = name;
		minRank = min;
		maxRank = max;
	}

	~ReactionRankData() {
	}

	String getTemplateName() {
		return templateName;
	}

	int getRandomRank() {
		return minRank + System::random(maxRank - minRank);
	}
};

} // namespace reaction
} // namespace managers
} // namespace zone
} // namespace server

#endif /* REACTIONRANKDATA_H_ */
