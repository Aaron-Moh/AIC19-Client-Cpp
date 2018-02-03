#include "Path.h"

#include "../Utility.h"

Path::Path(const std::vector<RoadCell*>& road)
        : m_road(road)
{
}

void Path::set_road(const std::vector<RoadCell*>& road) {
    m_road = road;
}

const std::vector<RoadCell*>& Path::get_road() {
    return m_road;
}

std::vector<const RoadCell*> Path::get_road() const {
    return const_list_cast<const RoadCell*>(m_road);
}
