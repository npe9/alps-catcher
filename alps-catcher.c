#include <alps/alps_toolAssist.h>
#include <alps/libalpsutil.h>

int
wrap_alps_get_placement_info(
	uint64_t apid, alpsAppLayout_t *appLayout,
	int **placementList, int **targetNids, int **targetPes,
	int **targetLen, struct in_addr **targetIps, int **startPe,
	int **totalPes, int **nodePes, int **peCpus)
{
	int ret;
	ret = __real_alps_get_placement_info(appLayout, placementList, targetNids, targetPes, targetLen, targetIps, startPe, totalPes, nodePes, peCpus);
	printf("%s: got ret %d\n", __func__, ret);
	return ret;
}
