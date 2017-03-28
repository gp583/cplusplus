class Customer
{
    char* name;
    char* address;
public:
    Customer();
    void setName(const char* name);
    void setAddress(const char* address);
    const char* getName() const;
    const char* getAddress() const;
    Customer(const Customer& other);
    ~Customer();
    void operator=(const Customer& rhs);
    bool operator==(const Customer& rhs) const;
    bool operator!=(const Customer& rhs) const;
};