# Add glibc to the overrides.
OVERRIDES =. "libc-glibc:"

# The things glibc can provide.  We default to wanting glibc to provide them.
PREFERRED_PROVIDER_virtual/libiconv ?= "glibc"
PREFERRED_PROVIDER_virtual/libintl ?= "glibc"
PREFERRED_PROVIDER_virtual/libc = "glibc"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}libc-initial = "glibc-initial"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}libc-for-gcc = "glibc"
PREFERRED_PROVIDER_linux-libc-headers = "linux-libc-headers"

# glibc is configured for OLDEST_KERNEL kernel version, so we set minimal
# sane versions there


# ARM OABI is fine with 2.4.0, EABI is not, so we override on "-gnueabi"
# TARGET_OS here, not on architecture which is 'arm' in both cases
