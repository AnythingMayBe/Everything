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

    // Reported Events (to the webhook)
    bot.on_autocomplete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_button_click([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_channel_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_channel_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_channel_pins_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_channel_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_form_submit([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_ban_add([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_ban_remove([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_emojis_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_integrations_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_join_request_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_member_add([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_member_remove([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_member_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_members_chunk([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_role_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_role_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_role_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_scheduled_event_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_scheduled_event_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_scheduled_event_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_scheduled_event_user_add([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_scheduled_event_user_remove([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_stickers_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_guild_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_integration_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_integration_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_integration_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_interaction_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_invite_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_invite_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_delete_bulk([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_reaction_add([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_reaction_remove([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_reaction_remove_all([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_reaction_remove_emoji([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_message_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_presence_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_resumed([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_select_click([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_stage_instance_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_stage_instance_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_stage_instance_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_thread_create([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_thread_delete([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_thread_list_sync([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_thread_member_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_thread_members_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_thread_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_typing_start([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_user_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_buffer_send([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_client_disconnect([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_client_speaking([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_ready([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_receive([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_server_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_state_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_track_marker([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_voice_user_talking([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });
    bot.on_webhooks_update([&bot, &wh](const auto & event) {
        bot.execute_webhook(wh, dpp::message(event.raw_event));
    });

    


    // Start bot
    bot.start(false);
    return 0;
}