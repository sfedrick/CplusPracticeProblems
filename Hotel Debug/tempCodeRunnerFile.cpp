class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};