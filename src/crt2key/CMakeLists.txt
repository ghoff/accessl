PROJECT (crt2key)

SET(BENCHMARK_SOURCE crt2key.c)

FIND_PACKAGE(OpenSSL REQUIRED)

INCLUDE_DIRECTORIES(
    ${OPENSSL_INCLUDE_DIR}
)

ADD_EXECUTABLE(crt2key ${BENCHMARK_SOURCE})
TARGET_LINK_LIBRARIES(crt2key ${OPENSSL_CRYPTO_LIBRARIES})

INSTALL(TARGETS crt2key
    RUNTIME DESTINATION bin
)

