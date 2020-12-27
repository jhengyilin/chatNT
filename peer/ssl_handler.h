// ssl_handler.h
#ifndef SSL_HANDLER_H
#define SSL_HANDLER_H

#include <openssl/evp.h>
#include <openssl/pem.h>
#include <string>

class SslHandler
{
public:
  SslHandler();
  std::string getHashId() { return hashId; }
  std::string getPublicKey() { return publicKey; }

  std::string encryptMessage(std::string, std::string);
  std::string decryptMessage(std::string);
  std::string signMessage(std::string);
  bool verifyMessage(std::string, std::string, std::string);

private:
  std::string hashId;
  std::string publicKey;
  RSA *privateKey;
};

#endif