/* These are the typical values
 * on an 64-bit plaform where
 * int is 4 bytes, 
 * long is 8 bytes
 */

/* set this to a printf format that can be used for an sb8/int64_t */
#define RWL_SB8PRINTF "%ld"

/* set this to a function that converts a string to an sb8/int64_t */
#define rwlatosb8(s) atol((char *)s)

#define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
#define RWL_NAME_MAX NAME_MAX // max individual file name normally 255

