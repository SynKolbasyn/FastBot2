#pragma once
#include <Arduino.h>
#include <GSON.h>
#include <StringUtils.h>

#include "ChatRead.h"
#include "UserRead.h"
#include "core/api.h"

namespace fb {

// https://core.telegram.org/bots/api#messageorigin
struct MessageOriginRead {
    MessageOriginRead(gson::Entry entry) : entry(entry) {}

    enum class Type : size_t {
        user = su::SH("user"),
        hiddenUser = su::SH("hidden_user"),
        chat = su::SH("chat"),
        channel = su::SH("channel"),
    };

    // тип отправителя: user, hidden_user, chat, channel
    Type type() {
        return (Type)entry[fbhash::type].hash();
    }

    // дата оригинального сообщения
    su::Text date() {
        return entry[fbhash::date];
    }

    // отправитель type == user
    UserRead senderUser() {
        return UserRead(entry[fbhash::sender_user]);
    }

    // отправитель type == chat
    ChatRead senderChat() {
        return ChatRead(entry[fbhash::sender_chat]);
    }

    // отправитель type == channel
    ChatRead chat() {
        return ChatRead(entry[fbhash::chat]);
    }

    // доступ к пакету данных
    gson::Entry entry;
};

}  // namespace fb