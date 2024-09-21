//#include

class TCP_Interface {
  public:
    TCP_Interface(int port_number, bool is_active);
    ~TCP_Interface() = default;

    void run();
  // TODO
};
