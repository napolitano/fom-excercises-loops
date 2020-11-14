#include <stdio.h>
#include <limits.h>
#include <float.h>

int main () {

    signed char sigCharHigh = SCHAR_MAX;
    signed char sigCharLow = -SCHAR_MIN;
    signed short sigShortHigh = SHRT_MAX;
    signed short sigShortLow = SHRT_MIN;
    signed int sigIntHigh = INT_MAX;
    signed int sigIntLow = INT_MIN;
    signed long sigLongHigh = LONG_MAX;
    signed long sigLongLow = LONG_MIN;
    signed long long sigLongLongHigh = LLONG_MAX;
    signed long long sigLongLongLow = LLONG_MIN;
    unsigned char unsigChar = UCHAR_MAX;
    unsigned short unsigShort = USHRT_MAX;
    unsigned int unsigInt = UINT_MAX;
    unsigned long unsigLong = ULONG_MAX;
    unsigned long long unsigLongLong = ULLONG_MAX;
    float floatHigh = FLT_MAX;
    float floatLow = FLT_MIN;
    double doubleHigh = DBL_MAX;
    double doubleLow = DBL_MIN;
    long double longDoubleHigh = LDBL_MAX;
    long double longDoubleLow = LDBL_MIN; 

    printf("Signed Char Min = %hhd. Signed Unterlauf = %hhd. Als unsigned = %hhu\n", sigCharLow, sigCharLow -1, sigCharLow);
    printf("Signed Char Max = %hhd. Signed Überlauf = %hhd. Als unsigned = %hhu\n", sigCharHigh, sigCharHigh +1, sigCharHigh);

    printf("Signed Short Min = %hi. Signed Unterlauf = %hi. Als unsigned = %hu\n", sigShortLow, sigShortLow -1, sigShortLow);
    printf("Signed Short Max = %hi. Signed Überlauf = %hi. Als unsigned = %hu\n", sigShortHigh, sigShortHigh +1, sigShortHigh);

    printf("Signed Int Min = %i. Signed Unterlauf = %i. Als unsigned = %u\n", sigIntLow, sigIntLow -1, sigIntLow);
    printf("Signed Int Max = %i. Signed Überlauf = %i. Als unsigned = %u\n", sigIntHigh, sigIntHigh +1, sigIntHigh);

    printf("Signed Long Min = %ld. Signed Unterlauf = %ld. Als unsigned = %lu\n", sigLongLow, sigLongLow -1, sigLongLow);
    printf("Signed Long Max = %ld. Signed Überlauf = %ld. Als unsigned = %lu\n", sigLongHigh, sigLongHigh +1, sigLongHigh);

    printf("Signed Long Long Min = %lld. Signed Unterlauf = %lld. Als unsigned = %llu\n", sigLongLongLow, sigLongLongLow -1, sigLongLongLow);
    printf("Signed Long Long Max = %lld. Signed Überlauf = %lld. Als unsigned = %llu\n", sigLongLongHigh, sigLongLongHigh +1, sigLongLongHigh);

    printf("Unsigned Char = %hhu. Signed Überlauf = %hhu. Als signed = %hhd\n", unsigChar, unsigChar +1, unsigChar);
    printf("Unsigned Short = %hu. Signed Überlauf = %hu. Als signed = %hd\n", unsigChar, unsigChar +1, unsigChar);
    printf("Unsigned Long = %lu. Signed Überlauf = %lu. Als signed = %ld\n", unsigLong, unsigLong +1, unsigLong);
    printf("Unsigned Long Long = %llu. Signed Überlauf = %llu. Als signed = %lld\n", unsigLongLong, unsigLongLong +1, unsigLongLong);

    printf("Signed Float Min = %f. Signed Unterlauf = %f.\n", floatLow, floatLow -1);
    printf("Signed Float Max = %f. Signed Überlauf = %f.\n", floatHigh, floatHigh +1);

    printf("Signed Double Min = %e. Signed Unterlauf = %e.\n", doubleLow, doubleLow -1);
    printf("Signed Double Max = %e. Signed Überlauf = %e.\n", doubleHigh, doubleHigh +1);

    printf("Signed Long Double Min = %Le. Signed Unterlauf = %Le.\n", longDoubleLow, longDoubleLow -1);
    printf("Signed Long Double Max = %Le. Signed Überlauf = %Le.\n", longDoubleHigh, longDoubleHigh +1);

}