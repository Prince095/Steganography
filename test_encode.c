
#include "encode.h"
#include "types.h"

int main( int argc,int **argv)
{
		if(check_operation_type(argv) == e_encode)
		{
		EncodeInfo encInfo;
		read_and_validate_encode_args(argv, &encInfo)
}
operationType check_operation_type(char **argv)
{
		if(!(strcmp(argv[1], "-e")))
		{
				return e_encode;
		}

}

else if(!(strcmp(argv[1], "-d")))
{
		return e_decode;
}
else
{
		return e_unsupported;
}





