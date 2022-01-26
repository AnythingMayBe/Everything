#include <dpp/dpp.h>
#include <iostream>

int main() {
    // Init
    dpp::cluster bot("ODc4NTgwNDU2NzA5MjkyMDUz.YSDP0A.5108bZ_8eR5izYq8iinTvRDqV1Q");

    // Webhook Init
    dpp::webhook wh;
    wh.id = 935940551105196042; // The ID of your Webhook
    wh.token = "CBG3AWBvApyTYlJolLG9LAkHOcXN5t6zZdHrX-qOZ7RrnmoW3LZN4waMsqhHhTTH3gKH"; // The token of your webhook
    

    // Events

    bot.on_ready([&bot](const auto & event) {
        std::cout << "Logged in as " << bot.me.username << std::endl;
    });

    bot.on_log([&bot](const dpp::log_t & event) {
        std::cout << event.message << std::endl;
    });

    // Start bot
    bot.start(false);
    return 0;
}