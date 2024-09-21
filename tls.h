//#include

enum TlsVersion {
  kTLS1_3 = 0,
  kNumVersions
};

enum TlsCiphersuite {
  kAES256_GCM_SHA384 = 0,
  kNumCipherSuites
};

class TLS {
  public:
    TLS(TlsVersion version, TlsCiphersuite ciphersuite, bool is_server);
    ~TLS() = default;

    void run();
  // TODO
};
