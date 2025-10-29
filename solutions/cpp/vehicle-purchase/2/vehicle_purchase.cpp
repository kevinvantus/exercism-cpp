#include "vehicle_purchase.h"

namespace vehicle_purchase
{

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind)
    {
        // TODO: Return true if you need a license for that kind of vehicle.
        if (kind == "car" || kind == "truck")
        {
            return true;
        }
        return false;
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2)
    {
        // TODO: Return the final decision in a sentence.
        std::string selected_vehicle{};

        if (option1 < option2)
        {
            selected_vehicle = option1;
        }
        else
        {
            selected_vehicle = option2;
        }

        return selected_vehicle + " is clearly the better choice.";
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age)
    {
        // TODO: Return the age-corrected resell price.
        if (age < 3)
        {
            return original_price - (original_price * 0.2);
        }

        if (age >= 10)
        {
            return original_price - (original_price * 0.5);
        }

        return original_price - (original_price * 0.3);
    }

} // namespace vehicle_purchase
