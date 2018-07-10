#ifndef SMENTITY_H
#define SMENTITY_H

#include <QString>

class SmEntity
  {
    qint32 mId;
  public:
    SmEntity();

    qint32  id() const { return mId; }

    QString description() const;
  };

#endif // SMENTITY_H
