/* 
 * File:   MapItem.h
 * Author: awmil_000
 *
 * Created on October 3, 2015, 10:55 AM
 */

#ifndef MAPITEM_H
#define	MAPITEM_H

class MapItem {
public:
    MapItem();
    virtual ~MapItem();
    virtual void tick() =0;

//Depricated
//
//    explicit MapItem(char initializer);
//    MapItem(const MapItem& orig);
//    char getType() const;
//    void setType(char newType);
//    friend std::ifstream& operator>>(std::ifstream& nifstr, MapItem& mapitem);
//    friend std::ostream& operator<<(std::ostream& ostrizr, MapItem& mapitem);
    
//private:
//    char type;

};

#endif	/* MAPITEM_H */

