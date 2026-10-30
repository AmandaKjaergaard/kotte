#pragma once

#include "kotte/entity_handle.hpp"

#include <cstdint>
#include <optional>
#include <raylib.h>

namespace kotte
{
    enum class EntityKind : std::uint8_t {
        player,
        bomb,
        crate,
        enemy,
        blast_powerup
    };

    enum class CardinalDirection : std::uint8_t {
        up,
        right,
        down,
        left
    };

    struct BombState final {
        EntityHandle owner;
        float fuse_remaining = 0.0f;
        std::uint8_t blast_range = 0;
        bool detonation_requested = false;
        bool owner_has_left = false; // Track if the owner has left the bomb's tile
    };

    struct PlayerState final {
        std::uint8_t health = 3;
        bool is_dead = false;
        int enemy_kill_count_ = 0;
        int enemies_to_kill_for_win_ = 3;
        std::uint8_t bomb_blast_range_ = 3;
        std::uint8_t max_bomb_blast_range_ = 5;
    };

    struct EnemyState final {
        float bomb_timer = 3.0f;
    };

    struct Entity final {
        EntityKind kind = EntityKind::crate;
        Vector2 world_position{};
        CardinalDirection movement_heading = CardinalDirection::right;
        std::optional<BombState> bomb_state;
        std::optional<PlayerState> player_state;
        std::optional<EnemyState> enemy_state;
    };
}
