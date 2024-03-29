#ifndef __OBJPARSE_H__
#define __OBJPARSE_H__

#include <istream>

#include <meshparse/mesh.h>

namespace meshparse {
	bool load_obj(std::istream& input, mesh& mesh);
}

#endif
