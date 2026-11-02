/*
 * Copyright (C) 2026 MillenniumOSS
 * SPDX-License-Identifier: Apache-2.0
 */
#include <string>

class Cam3TranServerEngine {
public:
  static Cam3TranServerEngine *createInstance();
  virtual ~Cam3TranServerEngine() = 0;

  virtual void destroyInstance() = 0;
  virtual bool init() = 0;
  virtual bool uninit() = 0;
  virtual bool getTranServerpackageName(std::string &) = 0;
  virtual bool onTelescopicStatusCallback(int, int) = 0;
  virtual bool setFactor(std::string, std::string) = 0;
  virtual bool getFactor(std::string, std::string &) = 0;
};

class Cam3TranServerEngineImp : public Cam3TranServerEngine {
public:
  static Cam3TranServerEngineImp *getInstance();

  Cam3TranServerEngineImp();
  ~Cam3TranServerEngineImp() override;

  void destroyInstance() override;
  bool init() override;
  bool uninit() override;
  bool getTranServerpackageName(std::string &) override;
  bool onTelescopicStatusCallback(int, int) override;
  bool setFactor(std::string, std::string) override;
  bool getFactor(std::string, std::string &) override;

  bool __initTranCamServerHAL();
};

Cam3TranServerEngine::~Cam3TranServerEngine() = default;

Cam3TranServerEngine *Cam3TranServerEngine::createInstance() {
  return Cam3TranServerEngineImp::getInstance();
}

Cam3TranServerEngineImp *Cam3TranServerEngineImp::getInstance() {
  static Cam3TranServerEngineImp sInstance;
  return &sInstance;
}

Cam3TranServerEngineImp::Cam3TranServerEngineImp() = default;
Cam3TranServerEngineImp::~Cam3TranServerEngineImp() = default;

void Cam3TranServerEngineImp::destroyInstance() {}
bool Cam3TranServerEngineImp::init() { return true; }
bool Cam3TranServerEngineImp::__initTranCamServerHAL() { return true; }
bool Cam3TranServerEngineImp::uninit() { return true; }
bool Cam3TranServerEngineImp::getTranServerpackageName(std::string &) {
  return false;
}
bool Cam3TranServerEngineImp::onTelescopicStatusCallback(int, int) {
  return false;
}
bool Cam3TranServerEngineImp::setFactor(std::string, std::string) {
  return true;
}
bool Cam3TranServerEngineImp::getFactor(std::string, std::string &) {
  return false;
}

