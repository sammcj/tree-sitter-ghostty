#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  aux_sym__kebab_case_identifier_token1 = 4,
  anon_sym_DASH = 5,
  aux_sym__snake_case_identifier_token1 = 6,
  anon_sym__ = 7,
  aux_sym__snake_case_insensitive_identifier_token1 = 8,
  aux_sym__snake_case_insensitive_identifier_token2 = 9,
  aux_sym_value_token1 = 10,
  anon_sym_COMMA = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  sym_number = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_string_token2 = 18,
  aux_sym_string_token3 = 19,
  aux_sym__loose_string_token1 = 20,
  aux_sym__loose_string_token2 = 21,
  anon_sym_POUND = 22,
  aux_sym_color_token1 = 23,
  sym_percent_adjustment = 24,
  sym_numeric_adjustment = 25,
  aux_sym__raw_value_token1 = 26,
  anon_sym_palette = 27,
  aux_sym_palette_value_token1 = 28,
  anon_sym_EQ2 = 29,
  anon_sym_config_DASHfile = 30,
  anon_sym_gtk_DASHcustom_DASHcss = 31,
  anon_sym_custom_DASHshader = 32,
  anon_sym_background_DASHimage = 33,
  anon_sym_QMARK = 34,
  anon_sym_keybind = 35,
  anon_sym_clear = 36,
  anon_sym_all = 37,
  anon_sym_global = 38,
  anon_sym_local = 39,
  anon_sym_unconsumed = 40,
  anon_sym_performable = 41,
  anon_sym_COLON = 42,
  anon_sym_physical = 43,
  anon_sym_GT = 44,
  anon_sym_PLUS = 45,
  anon_sym_shift = 46,
  anon_sym_ctrl = 47,
  anon_sym_control = 48,
  anon_sym_alt = 49,
  anon_sym_option = 50,
  anon_sym_opt = 51,
  anon_sym_super = 52,
  anon_sym_cmd = 53,
  anon_sym_command = 54,
  aux_sym_key_token1 = 55,
  aux_sym__action_arg_value_token1 = 56,
  anon_sym_theme = 57,
  anon_sym_COMMA2 = 58,
  anon_sym_light = 59,
  anon_sym_dark = 60,
  aux_sym_theme_variant_token1 = 61,
  anon_sym_env = 62,
  anon_sym_initial_DASHcommand = 63,
  anon_sym_direct = 64,
  anon_sym_shell = 65,
  sym_document = 66,
  sym_directive = 67,
  sym_basic_directive = 68,
  sym__kebab_case_identifier = 69,
  sym__snake_case_identifier = 70,
  sym__snake_case_insensitive_identifier = 71,
  sym_property = 72,
  sym_value = 73,
  sym_tuple = 74,
  sym_boolean = 75,
  sym_adjustment = 76,
  sym_string = 77,
  sym__loose_string = 78,
  sym_color = 79,
  sym__raw_value = 80,
  sym_palette_directive = 81,
  sym_palette_value = 82,
  sym_path_property = 83,
  sym_path_directive = 84,
  sym_path_value = 85,
  sym_keybind_directive = 86,
  sym_keybind_value = 87,
  sym_keybind_modifier = 88,
  sym_key_qualifier = 89,
  sym_keybind_trigger = 90,
  sym_chord = 91,
  sym_modifier_key = 92,
  sym_key = 93,
  sym_keybind_action = 94,
  sym__action_arg_value = 95,
  sym_theme_directive = 96,
  sym_theme_value = 97,
  sym_theme_variant = 98,
  sym_env_directive = 99,
  sym_env_value = 100,
  sym_env_var_name = 101,
  sym_env_var_value = 102,
  sym_command_directive = 103,
  sym_command_value = 104,
  sym_command_modifier = 105,
  aux_sym_document_repeat1 = 106,
  aux_sym__kebab_case_identifier_repeat1 = 107,
  aux_sym__snake_case_identifier_repeat1 = 108,
  aux_sym__snake_case_insensitive_identifier_repeat1 = 109,
  aux_sym_keybind_value_repeat1 = 110,
  aux_sym_keybind_trigger_repeat1 = 111,
  aux_sym_chord_repeat1 = 112,
  aux_sym_theme_value_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [aux_sym__kebab_case_identifier_token1] = "_kebab_case_identifier_token1",
  [anon_sym_DASH] = "-",
  [aux_sym__snake_case_identifier_token1] = "_snake_case_identifier_token1",
  [anon_sym__] = "_",
  [aux_sym__snake_case_insensitive_identifier_token1] = "_snake_case_insensitive_identifier_token1",
  [aux_sym__snake_case_insensitive_identifier_token2] = "_snake_case_insensitive_identifier_token2",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym__loose_string_token1] = "_loose_string_token1",
  [aux_sym__loose_string_token2] = "_loose_string_token2",
  [anon_sym_POUND] = "#",
  [aux_sym_color_token1] = "color_token1",
  [sym_percent_adjustment] = "percent_adjustment",
  [sym_numeric_adjustment] = "numeric_adjustment",
  [aux_sym__raw_value_token1] = "_raw_value_token1",
  [anon_sym_palette] = "property",
  [aux_sym_palette_value_token1] = "palette_index",
  [anon_sym_EQ2] = "=",
  [anon_sym_config_DASHfile] = "config-file",
  [anon_sym_gtk_DASHcustom_DASHcss] = "gtk-custom-css",
  [anon_sym_custom_DASHshader] = "custom-shader",
  [anon_sym_background_DASHimage] = "background-image",
  [anon_sym_QMARK] = "\?",
  [anon_sym_keybind] = "property",
  [anon_sym_clear] = "clear",
  [anon_sym_all] = "all",
  [anon_sym_global] = "global",
  [anon_sym_local] = "local",
  [anon_sym_unconsumed] = "unconsumed",
  [anon_sym_performable] = "performable",
  [anon_sym_COLON] = ":",
  [anon_sym_physical] = "physical",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_shift] = "shift",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_control] = "control",
  [anon_sym_alt] = "alt",
  [anon_sym_option] = "option",
  [anon_sym_opt] = "opt",
  [anon_sym_super] = "super",
  [anon_sym_cmd] = "cmd",
  [anon_sym_command] = "command",
  [aux_sym_key_token1] = "key_token1",
  [aux_sym__action_arg_value_token1] = "number",
  [anon_sym_theme] = "property",
  [anon_sym_COMMA2] = ",",
  [anon_sym_light] = "light",
  [anon_sym_dark] = "dark",
  [aux_sym_theme_variant_token1] = "string",
  [anon_sym_env] = "property",
  [anon_sym_initial_DASHcommand] = "property",
  [anon_sym_direct] = "direct",
  [anon_sym_shell] = "shell",
  [sym_document] = "document",
  [sym_directive] = "directive",
  [sym_basic_directive] = "basic_directive",
  [sym__kebab_case_identifier] = "_kebab_case_identifier",
  [sym__snake_case_identifier] = "action_name",
  [sym__snake_case_insensitive_identifier] = "_snake_case_insensitive_identifier",
  [sym_property] = "property",
  [sym_value] = "value",
  [sym_tuple] = "tuple",
  [sym_boolean] = "boolean",
  [sym_adjustment] = "adjustment",
  [sym_string] = "string",
  [sym__loose_string] = "string",
  [sym_color] = "color",
  [sym__raw_value] = "_raw_value",
  [sym_palette_directive] = "palette_directive",
  [sym_palette_value] = "palette_value",
  [sym_path_property] = "property",
  [sym_path_directive] = "path_directive",
  [sym_path_value] = "path_value",
  [sym_keybind_directive] = "keybind_directive",
  [sym_keybind_value] = "keybind_value",
  [sym_keybind_modifier] = "keybind_modifier",
  [sym_key_qualifier] = "key_qualifier",
  [sym_keybind_trigger] = "keybind_trigger",
  [sym_chord] = "chord",
  [sym_modifier_key] = "modifier_key",
  [sym_key] = "key",
  [sym_keybind_action] = "keybind_action",
  [sym__action_arg_value] = "action_argument",
  [sym_theme_directive] = "theme_directive",
  [sym_theme_value] = "theme_value",
  [sym_theme_variant] = "theme_variant",
  [sym_env_directive] = "env_directive",
  [sym_env_value] = "env_value",
  [sym_env_var_name] = "env_var_name",
  [sym_env_var_value] = "env_var_value",
  [sym_command_directive] = "command_directive",
  [sym_command_value] = "command_value",
  [sym_command_modifier] = "command_modifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__kebab_case_identifier_repeat1] = "_kebab_case_identifier_repeat1",
  [aux_sym__snake_case_identifier_repeat1] = "_snake_case_identifier_repeat1",
  [aux_sym__snake_case_insensitive_identifier_repeat1] = "_snake_case_insensitive_identifier_repeat1",
  [aux_sym_keybind_value_repeat1] = "keybind_value_repeat1",
  [aux_sym_keybind_trigger_repeat1] = "keybind_trigger_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [aux_sym_theme_value_repeat1] = "theme_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__kebab_case_identifier_token1] = aux_sym__kebab_case_identifier_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__snake_case_identifier_token1] = aux_sym__snake_case_identifier_token1,
  [anon_sym__] = anon_sym__,
  [aux_sym__snake_case_insensitive_identifier_token1] = aux_sym__snake_case_insensitive_identifier_token1,
  [aux_sym__snake_case_insensitive_identifier_token2] = aux_sym__snake_case_insensitive_identifier_token2,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym__loose_string_token1] = aux_sym__loose_string_token1,
  [aux_sym__loose_string_token2] = aux_sym__loose_string_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [sym_percent_adjustment] = sym_percent_adjustment,
  [sym_numeric_adjustment] = sym_numeric_adjustment,
  [aux_sym__raw_value_token1] = aux_sym__raw_value_token1,
  [anon_sym_palette] = sym_property,
  [aux_sym_palette_value_token1] = aux_sym_palette_value_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_config_DASHfile] = anon_sym_config_DASHfile,
  [anon_sym_gtk_DASHcustom_DASHcss] = anon_sym_gtk_DASHcustom_DASHcss,
  [anon_sym_custom_DASHshader] = anon_sym_custom_DASHshader,
  [anon_sym_background_DASHimage] = anon_sym_background_DASHimage,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_keybind] = sym_property,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_unconsumed] = anon_sym_unconsumed,
  [anon_sym_performable] = anon_sym_performable,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_physical] = anon_sym_physical,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_command] = anon_sym_command,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [aux_sym__action_arg_value_token1] = sym_number,
  [anon_sym_theme] = sym_property,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_dark] = anon_sym_dark,
  [aux_sym_theme_variant_token1] = sym_string,
  [anon_sym_env] = sym_property,
  [anon_sym_initial_DASHcommand] = sym_property,
  [anon_sym_direct] = anon_sym_direct,
  [anon_sym_shell] = anon_sym_shell,
  [sym_document] = sym_document,
  [sym_directive] = sym_directive,
  [sym_basic_directive] = sym_basic_directive,
  [sym__kebab_case_identifier] = sym__kebab_case_identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
  [sym__snake_case_insensitive_identifier] = sym__snake_case_insensitive_identifier,
  [sym_property] = sym_property,
  [sym_value] = sym_value,
  [sym_tuple] = sym_tuple,
  [sym_boolean] = sym_boolean,
  [sym_adjustment] = sym_adjustment,
  [sym_string] = sym_string,
  [sym__loose_string] = sym_string,
  [sym_color] = sym_color,
  [sym__raw_value] = sym__raw_value,
  [sym_palette_directive] = sym_palette_directive,
  [sym_palette_value] = sym_palette_value,
  [sym_path_property] = sym_property,
  [sym_path_directive] = sym_path_directive,
  [sym_path_value] = sym_path_value,
  [sym_keybind_directive] = sym_keybind_directive,
  [sym_keybind_value] = sym_keybind_value,
  [sym_keybind_modifier] = sym_keybind_modifier,
  [sym_key_qualifier] = sym_key_qualifier,
  [sym_keybind_trigger] = sym_keybind_trigger,
  [sym_chord] = sym_chord,
  [sym_modifier_key] = sym_modifier_key,
  [sym_key] = sym_key,
  [sym_keybind_action] = sym_keybind_action,
  [sym__action_arg_value] = sym__action_arg_value,
  [sym_theme_directive] = sym_theme_directive,
  [sym_theme_value] = sym_theme_value,
  [sym_theme_variant] = sym_theme_variant,
  [sym_env_directive] = sym_env_directive,
  [sym_env_value] = sym_env_value,
  [sym_env_var_name] = sym_env_var_name,
  [sym_env_var_value] = sym_env_var_value,
  [sym_command_directive] = sym_command_directive,
  [sym_command_value] = sym_command_value,
  [sym_command_modifier] = sym_command_modifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__kebab_case_identifier_repeat1] = aux_sym__kebab_case_identifier_repeat1,
  [aux_sym__snake_case_identifier_repeat1] = aux_sym__snake_case_identifier_repeat1,
  [aux_sym__snake_case_insensitive_identifier_repeat1] = aux_sym__snake_case_insensitive_identifier_repeat1,
  [aux_sym_keybind_value_repeat1] = aux_sym_keybind_value_repeat1,
  [aux_sym_keybind_trigger_repeat1] = aux_sym_keybind_trigger_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
  [aux_sym_theme_value_repeat1] = aux_sym_theme_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kebab_case_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__snake_case_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__snake_case_insensitive_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__snake_case_insensitive_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__loose_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__loose_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_percent_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_adjustment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__raw_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_palette] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_palette_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gtk_DASHcustom_DASHcss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom_DASHshader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background_DASHimage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keybind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unconsumed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_performable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_physical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__action_arg_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_theme] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dark] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_theme_variant_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initial_DASHcommand] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__kebab_case_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__snake_case_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__snake_case_insensitive_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__loose_string] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_value] = {
    .visible = false,
    .named = true,
  },
  [sym_palette_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_palette_value] = {
    .visible = true,
    .named = true,
  },
  [sym_path_property] = {
    .visible = true,
    .named = true,
  },
  [sym_path_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_path_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_key_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_chord] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_action] = {
    .visible = true,
    .named = true,
  },
  [sym__action_arg_value] = {
    .visible = true,
    .named = true,
  },
  [sym_theme_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_theme_value] = {
    .visible = true,
    .named = true,
  },
  [sym_theme_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_env_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_env_value] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var_name] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var_value] = {
    .visible = true,
    .named = true,
  },
  [sym_command_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_command_value] = {
    .visible = true,
    .named = true,
  },
  [sym_command_modifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__kebab_case_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__snake_case_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__snake_case_insensitive_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keybind_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keybind_trigger_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_theme_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_action = 1,
  field_action_name = 2,
  field_argument = 3,
  field_left = 4,
  field_modifier = 5,
  field_property = 6,
  field_qualifier = 7,
  field_right = 8,
  field_trigger = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_left] = "left",
  [field_modifier] = "modifier",
  [field_property] = "property",
  [field_qualifier] = "qualifier",
  [field_right] = "right",
  [field_trigger] = "trigger",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 1, .length = 2},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 0},
  [1] =
    {field_property, 0},
    {field_value, 2},
  [3] =
    {field_modifier, 0},
  [4] =
    {field_qualifier, 0},
  [5] =
    {field_action_name, 0},
  [6] =
    {field_action, 2},
    {field_trigger, 0},
  [8] =
    {field_left, 0},
    {field_right, 2},
  [10] =
    {field_action, 3},
    {field_trigger, 1},
  [12] =
    {field_action_name, 0},
    {field_argument, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_property,
  },
  [6] = {
    [0] = sym_property,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '"', 479,
        '#', 509,
        '\'', 483,
        '+', 570,
        ',', 461,
        '-', 366,
        ':', 564,
        '=', 532,
        '>', 569,
        '?', 537,
        '_', 452,
        'a', 287,
        'c', 288,
        'd', 229,
        'f', 232,
        'g', 289,
        'l', 278,
        'o', 327,
        'p', 266,
        's', 275,
        't', 329,
        'u', 315,
        'b', 363,
        'e', 363,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(206);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 208,
        '\r', 1,
        '#', 3,
        ',', 681,
        'b', 31,
        'c', 142,
        'e', 133,
        'g', 173,
        'i', 134,
        'k', 62,
        'p', 32,
        't', 87,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 209,
        '\r', 460,
        '"', 479,
        '#', 509,
        '\'', 483,
        'f', 488,
        't', 502,
        '+', 503,
        '-', 503,
        '\t', 460,
        0x0b, 460,
        '\f', 460,
        ' ', 460,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 210,
        '\r', 6,
        '"', 479,
        '\'', 483,
        'a', 634,
        'c', 635,
        'g', 642,
        'l', 654,
        'o', 660,
        'p', 625,
        's', 631,
        'u', 652,
        '#', 608,
        '?', 608,
        ':', 487,
        '=', 487,
        '>', 487,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 210,
        '\r', 6,
        '"', 479,
        '\'', 483,
        'a', 496,
        'c', 498,
        'g', 497,
        'l', 500,
        'o', 501,
        'p', 491,
        's', 492,
        'u', 499,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead == 's') ADVANCE(493);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(494);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == '?') ADVANCE(537);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(487);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ',') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(483);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(487);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == 'f') ADVANCE(516);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(524);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(570);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(569);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 18:
      if (lookahead == '+') ADVANCE(570);
      if (lookahead == '>') ADVANCE(569);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(366);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '=', 532,
        '>', 569,
        'a', 634,
        'c', 645,
        'g', 642,
        'l', 654,
        'o', 660,
        'p', 625,
        's', 631,
        'u', 652,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(608);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead == 's') ADVANCE(631);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(608);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 's') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '>', 569,
        'a', 104,
        'c', 127,
        'g', 113,
        'l', 147,
        'o', 153,
        'p', 73,
        's', 90,
        'u', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(603);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(599);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(685);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 189:
      if (lookahead == 'v') ADVANCE(690);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 192:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(192);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(608);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 204:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '\n', 208,
        '\r', 1,
        '#', 3,
        ',', 681,
        ':', 564,
        '=', 532,
        '_', 452,
        'b', 230,
        'c', 320,
        'e', 311,
        'g', 347,
        'i', 312,
        'k', 259,
        'p', 231,
        't', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 205:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '\n', 208,
        '\r', 1,
        '#', 3,
        ',', 681,
        'b', 31,
        'c', 142,
        'e', 133,
        'g', 173,
        'i', 134,
        'k', 62,
        'p', 32,
        't', 87,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(205);
      END_STATE();
    case 206:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '"', 479,
        '#', 509,
        '\'', 483,
        '+', 570,
        ',', 681,
        '=', 217,
        '>', 569,
        '?', 537,
        'a', 402,
        'c', 403,
        'd', 370,
        'f', 369,
        'g', 404,
        'l', 399,
        'o', 428,
        'p', 392,
        's', 397,
        't', 430,
        'u', 420,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(460);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(459);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(456);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(686);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == 't') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 't') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'v') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'h') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 't') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == 't') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(698);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(695);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(460);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(512);
      if (lookahead == '.') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      ADVANCE_MAP(
        '"', 480,
        '\'', 484,
        'f', 516,
        't', 520,
        '+', 524,
        '-', 524,
        '\t', 515,
        0x0b, 515,
        '\f', 515,
        ' ', 515,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(526);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'u') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_palette);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_gtk_DASHcustom_DASHcss);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_custom_DASHshader);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_background_DASHimage);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_keybind);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_all);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_all);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_global);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_global);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_local);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_local);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_performable);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_performable);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_performable);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_performable);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_option);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_option);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_super);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_super);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_command);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_command);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == 'h') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(632);
      if (lookahead == 'u') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(545);
      if (lookahead == 't') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(648);
      if (lookahead == 'n') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 's') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 's') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 't') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 't') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 't') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (lookahead == '.') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_theme);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_theme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_light);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_light);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_initial_DASHcommand);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_direct);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_direct);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_direct);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_shell);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_shell);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 204},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 204},
  [4] = {.lex_state = 204},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 204},
  [12] = {.lex_state = 204},
  [13] = {.lex_state = 204},
  [14] = {.lex_state = 204},
  [15] = {.lex_state = 204},
  [16] = {.lex_state = 204},
  [17] = {.lex_state = 204},
  [18] = {.lex_state = 204},
  [19] = {.lex_state = 204},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 204},
  [22] = {.lex_state = 204},
  [23] = {.lex_state = 204},
  [24] = {.lex_state = 204},
  [25] = {.lex_state = 204},
  [26] = {.lex_state = 204},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 204},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 204},
  [40] = {.lex_state = 204},
  [41] = {.lex_state = 204},
  [42] = {.lex_state = 204},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 204},
  [46] = {.lex_state = 204},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 204},
  [56] = {.lex_state = 204},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 204},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 192},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 204},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 204},
  [71] = {.lex_state = 204},
  [72] = {.lex_state = 204},
  [73] = {.lex_state = 204},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 204},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 202},
  [79] = {.lex_state = 204},
  [80] = {.lex_state = 200},
  [81] = {.lex_state = 204},
  [82] = {.lex_state = 204},
  [83] = {.lex_state = 204},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 204},
  [86] = {.lex_state = 204},
  [87] = {.lex_state = 204},
  [88] = {.lex_state = 204},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 204},
  [91] = {.lex_state = 688},
  [92] = {.lex_state = 481},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 204},
  [95] = {.lex_state = 203},
  [96] = {.lex_state = 204},
  [97] = {.lex_state = 485},
  [98] = {.lex_state = 204},
  [99] = {.lex_state = 204},
  [100] = {.lex_state = 204},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 204},
  [103] = {.lex_state = 204},
  [104] = {.lex_state = 204},
  [105] = {.lex_state = 204},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 204},
  [108] = {.lex_state = 204},
  [109] = {.lex_state = 204},
  [110] = {.lex_state = 204},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 204},
  [113] = {.lex_state = 204},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 204},
  [117] = {.lex_state = 204},
  [118] = {.lex_state = 204},
  [119] = {.lex_state = 204},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 204},
  [122] = {.lex_state = 204},
  [123] = {.lex_state = 204},
  [124] = {.lex_state = 200},
  [125] = {.lex_state = 204},
  [126] = {.lex_state = 202},
  [127] = {.lex_state = 204},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 204},
  [130] = {.lex_state = 505},
  [131] = {.lex_state = 507},
  [132] = {.lex_state = 204},
  [133] = {.lex_state = 204},
  [134] = {.lex_state = 204},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 204},
  [138] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__snake_case_identifier_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym__snake_case_insensitive_identifier_token1] = ACTIONS(1),
    [aux_sym__snake_case_insensitive_identifier_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_clear] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_unconsumed] = ACTIONS(1),
    [anon_sym_performable] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_physical] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_direct] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(120),
    [sym_directive] = STATE(3),
    [sym_basic_directive] = STATE(12),
    [sym__kebab_case_identifier] = STATE(84),
    [sym_property] = STATE(89),
    [sym_palette_directive] = STATE(12),
    [sym_path_property] = STATE(106),
    [sym_path_directive] = STATE(12),
    [sym_keybind_directive] = STATE(12),
    [sym_theme_directive] = STATE(12),
    [sym_env_directive] = STATE(12),
    [sym_command_directive] = STATE(12),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_gtk_DASHcustom_DASHcss] = ACTIONS(13),
    [anon_sym_custom_DASHshader] = ACTIONS(13),
    [anon_sym_background_DASHimage] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
    [anon_sym_command] = ACTIONS(17),
    [anon_sym_theme] = ACTIONS(19),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_initial_DASHcommand] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(23), 1,
      aux_sym_document_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(31), 1,
      anon_sym_clear,
    ACTIONS(35), 1,
      anon_sym_physical,
    ACTIONS(39), 1,
      aux_sym_key_token1,
    STATE(63), 1,
      sym_chord,
    STATE(103), 1,
      sym_string,
    STATE(125), 1,
      sym_keybind_value,
    STATE(126), 1,
      sym_key_qualifier,
    STATE(129), 1,
      sym_keybind_trigger,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(33), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(37), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [63] = 15,
    ACTIONS(9), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(19), 1,
      anon_sym_theme,
    ACTIONS(21), 1,
      anon_sym_env,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_document_token1,
    ACTIONS(45), 1,
      sym_comment,
    STATE(84), 1,
      sym__kebab_case_identifier,
    STATE(89), 1,
      sym_property,
    STATE(106), 1,
      sym_path_property,
    ACTIONS(17), 2,
      anon_sym_command,
      anon_sym_initial_DASHcommand,
    STATE(4), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(13), 4,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
    STATE(12), 7,
      sym_basic_directive,
      sym_palette_directive,
      sym_path_directive,
      sym_keybind_directive,
      sym_theme_directive,
      sym_env_directive,
      sym_command_directive,
  [120] = 15,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(58), 1,
      anon_sym_palette,
    ACTIONS(64), 1,
      anon_sym_keybind,
    ACTIONS(70), 1,
      anon_sym_theme,
    ACTIONS(73), 1,
      anon_sym_env,
    STATE(84), 1,
      sym__kebab_case_identifier,
    STATE(89), 1,
      sym_property,
    STATE(106), 1,
      sym_path_property,
    ACTIONS(67), 2,
      anon_sym_command,
      anon_sym_initial_DASHcommand,
    STATE(4), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(61), 4,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
    STATE(12), 7,
      sym_basic_directive,
      sym_palette_directive,
      sym_path_directive,
      sym_keybind_directive,
      sym_theme_directive,
      sym_env_directive,
      sym_command_directive,
  [177] = 9,
    ACTIONS(35), 1,
      anon_sym_physical,
    ACTIONS(39), 1,
      aux_sym_key_token1,
    STATE(63), 1,
      sym_chord,
    STATE(86), 1,
      sym_keybind_trigger,
    STATE(126), 1,
      sym_key_qualifier,
    STATE(7), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(33), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(37), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [219] = 12,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(76), 1,
      aux_sym_document_token1,
    ACTIONS(78), 1,
      aux_sym_value_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      aux_sym_color_token1,
    STATE(98), 1,
      sym_value,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(99), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [262] = 3,
    STATE(7), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(90), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(93), 11,
      anon_sym_physical,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
      aux_sym_key_token1,
  [287] = 1,
    ACTIONS(95), 16,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
      anon_sym_physical,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
      aux_sym_key_token1,
  [306] = 10,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(86), 1,
      aux_sym_color_token1,
    ACTIONS(88), 1,
      sym_numeric_adjustment,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym_percent_adjustment,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [342] = 6,
    ACTIONS(35), 1,
      anon_sym_physical,
    ACTIONS(39), 1,
      aux_sym_key_token1,
    STATE(69), 1,
      sym_chord,
    STATE(126), 1,
      sym_key_qualifier,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(37), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [370] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(111), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [389] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(115), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [408] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(119), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [427] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(123), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [446] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(127), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [465] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(131), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [484] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(135), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [503] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(139), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [522] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(143), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [541] = 5,
    ACTIONS(35), 1,
      anon_sym_physical,
    ACTIONS(39), 1,
      aux_sym_key_token1,
    STATE(126), 1,
      sym_key_qualifier,
    STATE(58), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(37), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [566] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(147), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [585] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(151), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [604] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(155), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [623] = 2,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(159), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [642] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(163), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [661] = 2,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(167), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [680] = 8,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym__raw_value_token1,
    ACTIONS(175), 1,
      aux_sym__action_arg_value_token1,
    STATE(133), 1,
      sym__raw_value,
    STATE(134), 1,
      sym__action_arg_value,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(132), 2,
      sym_boolean,
      sym__loose_string,
  [707] = 8,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(177), 1,
      aux_sym_document_token1,
    STATE(33), 1,
      sym_command_modifier,
    STATE(94), 1,
      sym_string,
    STATE(119), 1,
      sym_command_value,
    ACTIONS(179), 2,
      anon_sym_direct,
      anon_sym_shell,
  [733] = 8,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(181), 1,
      aux_sym_document_token1,
    STATE(45), 1,
      sym_theme_variant,
    STATE(82), 1,
      sym_string,
    STATE(83), 1,
      sym_theme_value,
    ACTIONS(183), 2,
      anon_sym_light,
      anon_sym_dark,
  [759] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(185), 1,
      aux_sym_document_token1,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_string,
    STATE(117), 1,
      sym_path_value,
  [781] = 6,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(189), 1,
      aux_sym_document_token1,
    STATE(121), 1,
      sym_string,
    STATE(122), 1,
      sym_env_var_value,
  [800] = 5,
    ACTIONS(191), 1,
      aux_sym_document_token1,
    ACTIONS(193), 1,
      aux_sym__snake_case_insensitive_identifier_token1,
    STATE(96), 1,
      sym__snake_case_insensitive_identifier,
    STATE(112), 1,
      sym_env_value,
    STATE(113), 1,
      sym_env_var_name,
  [816] = 4,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_string,
  [829] = 4,
    ACTIONS(29), 1,
      aux_sym_string_token3,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_string,
  [842] = 3,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      aux_sym_chord_repeat1,
    ACTIONS(195), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [853] = 3,
    ACTIONS(201), 1,
      anon_sym__,
    STATE(39), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(199), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [864] = 3,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      aux_sym_chord_repeat1,
    ACTIONS(203), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [875] = 3,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(35), 1,
      aux_sym_chord_repeat1,
    ACTIONS(208), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [886] = 3,
    ACTIONS(201), 1,
      anon_sym__,
    STATE(40), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(210), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [897] = 3,
    ACTIONS(214), 1,
      anon_sym__,
    STATE(40), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(212), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [908] = 3,
    ACTIONS(217), 1,
      aux_sym_document_token1,
    ACTIONS(219), 1,
      anon_sym_COMMA2,
    STATE(41), 1,
      aux_sym_theme_value_repeat1,
  [918] = 1,
    ACTIONS(212), 3,
      aux_sym_document_token1,
      anon_sym__,
      anon_sym_COLON,
  [924] = 3,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_DASH,
    STATE(51), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [934] = 3,
    ACTIONS(226), 1,
      aux_sym_document_token1,
    ACTIONS(228), 1,
      aux_sym_palette_value_token1,
    STATE(87), 1,
      sym_palette_value,
  [944] = 3,
    ACTIONS(230), 1,
      aux_sym_document_token1,
    ACTIONS(232), 1,
      anon_sym_COMMA2,
    STATE(55), 1,
      aux_sym_theme_value_repeat1,
  [954] = 3,
    ACTIONS(234), 1,
      anon_sym__,
    ACTIONS(236), 1,
      anon_sym_EQ2,
    STATE(56), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [964] = 3,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      aux_sym_color_token1,
    STATE(73), 1,
      sym_color,
  [974] = 3,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_EQ,
    STATE(43), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [984] = 1,
    ACTIONS(242), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [990] = 3,
    ACTIONS(244), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(68), 1,
      sym__snake_case_identifier,
    STATE(110), 1,
      sym_keybind_action,
  [1000] = 3,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      anon_sym_DASH,
    STATE(51), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1010] = 3,
    ACTIONS(251), 1,
      anon_sym_EQ2,
    ACTIONS(253), 1,
      anon_sym_GT,
    STATE(57), 1,
      aux_sym_keybind_trigger_repeat1,
  [1020] = 2,
    ACTIONS(257), 1,
      aux_sym_string_token3,
    ACTIONS(255), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1028] = 2,
    STATE(71), 1,
      sym_theme_variant,
    ACTIONS(259), 2,
      anon_sym_light,
      anon_sym_dark,
  [1036] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA2,
    ACTIONS(261), 1,
      aux_sym_document_token1,
    STATE(41), 1,
      aux_sym_theme_value_repeat1,
  [1046] = 3,
    ACTIONS(234), 1,
      anon_sym__,
    ACTIONS(263), 1,
      anon_sym_EQ2,
    STATE(62), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1056] = 3,
    ACTIONS(265), 1,
      anon_sym_EQ2,
    ACTIONS(267), 1,
      anon_sym_GT,
    STATE(57), 1,
      aux_sym_keybind_trigger_repeat1,
  [1066] = 1,
    ACTIONS(203), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1072] = 1,
    ACTIONS(270), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1078] = 3,
    ACTIONS(244), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(68), 1,
      sym__snake_case_identifier,
    STATE(127), 1,
      sym_keybind_action,
  [1088] = 1,
    ACTIONS(272), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1094] = 3,
    ACTIONS(274), 1,
      anon_sym__,
    ACTIONS(277), 1,
      anon_sym_EQ2,
    STATE(62), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1104] = 3,
    ACTIONS(253), 1,
      anon_sym_GT,
    ACTIONS(279), 1,
      anon_sym_EQ2,
    STATE(52), 1,
      aux_sym_keybind_trigger_repeat1,
  [1114] = 2,
    ACTIONS(281), 1,
      aux_sym_document_token1,
    ACTIONS(283), 1,
      anon_sym_COMMA,
  [1121] = 1,
    ACTIONS(246), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [1126] = 2,
    ACTIONS(285), 1,
      aux_sym__raw_value_token1,
    STATE(76), 1,
      sym__raw_value,
  [1133] = 2,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      aux_sym_document_token1,
  [1140] = 2,
    ACTIONS(289), 1,
      aux_sym_document_token1,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [1147] = 1,
    ACTIONS(265), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [1152] = 2,
    ACTIONS(293), 1,
      aux_sym_document_token1,
    ACTIONS(295), 1,
      anon_sym_COMMA2,
  [1159] = 2,
    ACTIONS(217), 1,
      aux_sym_document_token1,
    ACTIONS(297), 1,
      anon_sym_COMMA2,
  [1166] = 1,
    ACTIONS(277), 2,
      anon_sym__,
      anon_sym_EQ2,
  [1171] = 1,
    ACTIONS(299), 1,
      aux_sym_document_token1,
  [1175] = 1,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
  [1179] = 1,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
  [1183] = 1,
    ACTIONS(303), 1,
      aux_sym_document_token1,
  [1187] = 1,
    ACTIONS(305), 1,
      anon_sym_EQ,
  [1191] = 1,
    ACTIONS(307), 1,
      aux_sym_key_token1,
  [1195] = 1,
    ACTIONS(309), 1,
      aux_sym_document_token1,
  [1199] = 1,
    ACTIONS(311), 1,
      aux_sym__kebab_case_identifier_token1,
  [1203] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1207] = 1,
    ACTIONS(230), 1,
      aux_sym_document_token1,
  [1211] = 1,
    ACTIONS(315), 1,
      aux_sym_document_token1,
  [1215] = 1,
    ACTIONS(317), 1,
      anon_sym_EQ,
  [1219] = 1,
    ACTIONS(319), 1,
      anon_sym_EQ2,
  [1223] = 1,
    ACTIONS(321), 1,
      anon_sym_EQ2,
  [1227] = 1,
    ACTIONS(323), 1,
      aux_sym_document_token1,
  [1231] = 1,
    ACTIONS(325), 1,
      anon_sym_COLON,
  [1235] = 1,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [1239] = 1,
    ACTIONS(329), 1,
      aux_sym_document_token1,
  [1243] = 1,
    ACTIONS(331), 1,
      aux_sym_theme_variant_token1,
  [1247] = 1,
    ACTIONS(333), 1,
      aux_sym_string_token1,
  [1251] = 1,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [1255] = 1,
    ACTIONS(337), 1,
      aux_sym_document_token1,
  [1259] = 1,
    ACTIONS(339), 1,
      aux_sym__snake_case_insensitive_identifier_token2,
  [1263] = 1,
    ACTIONS(341), 1,
      anon_sym_EQ2,
  [1267] = 1,
    ACTIONS(343), 1,
      aux_sym_string_token2,
  [1271] = 1,
    ACTIONS(345), 1,
      aux_sym_document_token1,
  [1275] = 1,
    ACTIONS(281), 1,
      aux_sym_document_token1,
  [1279] = 1,
    ACTIONS(287), 1,
      aux_sym_document_token1,
  [1283] = 1,
    ACTIONS(347), 1,
      sym_number,
  [1287] = 1,
    ACTIONS(349), 1,
      aux_sym_document_token1,
  [1291] = 1,
    ACTIONS(351), 1,
      aux_sym_document_token1,
  [1295] = 1,
    ACTIONS(353), 1,
      aux_sym_document_token1,
  [1299] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1303] = 1,
    ACTIONS(357), 1,
      anon_sym_EQ,
  [1307] = 1,
    ACTIONS(359), 1,
      aux_sym_document_token1,
  [1311] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1315] = 1,
    ACTIONS(363), 1,
      aux_sym_document_token1,
  [1319] = 1,
    ACTIONS(365), 1,
      aux_sym_document_token1,
  [1323] = 1,
    ACTIONS(367), 1,
      anon_sym_EQ,
  [1327] = 1,
    ACTIONS(369), 1,
      aux_sym_document_token1,
  [1331] = 1,
    ACTIONS(371), 1,
      anon_sym_EQ2,
  [1335] = 1,
    ACTIONS(373), 1,
      anon_sym_EQ,
  [1339] = 1,
    ACTIONS(375), 1,
      anon_sym_EQ,
  [1343] = 1,
    ACTIONS(377), 1,
      aux_sym_document_token1,
  [1347] = 1,
    ACTIONS(379), 1,
      aux_sym_document_token1,
  [1351] = 1,
    ACTIONS(381), 1,
      aux_sym_document_token1,
  [1355] = 1,
    ACTIONS(383), 1,
      aux_sym_document_token1,
  [1359] = 1,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [1363] = 1,
    ACTIONS(387), 1,
      aux_sym_document_token1,
  [1367] = 1,
    ACTIONS(389), 1,
      aux_sym_document_token1,
  [1371] = 1,
    ACTIONS(391), 1,
      aux_sym_document_token1,
  [1375] = 1,
    ACTIONS(393), 1,
      aux_sym__kebab_case_identifier_token1,
  [1379] = 1,
    ACTIONS(395), 1,
      aux_sym_document_token1,
  [1383] = 1,
    ACTIONS(397), 1,
      aux_sym_key_token1,
  [1387] = 1,
    ACTIONS(399), 1,
      aux_sym_document_token1,
  [1391] = 1,
    ACTIONS(401), 1,
      aux_sym_color_token1,
  [1395] = 1,
    ACTIONS(403), 1,
      anon_sym_EQ2,
  [1399] = 1,
    ACTIONS(405), 1,
      aux_sym__loose_string_token1,
  [1403] = 1,
    ACTIONS(407), 1,
      aux_sym__loose_string_token2,
  [1407] = 1,
    ACTIONS(409), 1,
      aux_sym_document_token1,
  [1411] = 1,
    ACTIONS(411), 1,
      aux_sym_document_token1,
  [1415] = 1,
    ACTIONS(413), 1,
      aux_sym_document_token1,
  [1419] = 1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
  [1423] = 1,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
  [1427] = 1,
    ACTIONS(417), 1,
      aux_sym_document_token1,
  [1431] = 1,
    ACTIONS(419), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 219,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 287,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 370,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 427,
  [SMALL_STATE(15)] = 446,
  [SMALL_STATE(16)] = 465,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 503,
  [SMALL_STATE(19)] = 522,
  [SMALL_STATE(20)] = 541,
  [SMALL_STATE(21)] = 566,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 623,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 661,
  [SMALL_STATE(27)] = 680,
  [SMALL_STATE(28)] = 707,
  [SMALL_STATE(29)] = 733,
  [SMALL_STATE(30)] = 759,
  [SMALL_STATE(31)] = 781,
  [SMALL_STATE(32)] = 800,
  [SMALL_STATE(33)] = 816,
  [SMALL_STATE(34)] = 829,
  [SMALL_STATE(35)] = 842,
  [SMALL_STATE(36)] = 853,
  [SMALL_STATE(37)] = 864,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 886,
  [SMALL_STATE(40)] = 897,
  [SMALL_STATE(41)] = 908,
  [SMALL_STATE(42)] = 918,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 934,
  [SMALL_STATE(45)] = 944,
  [SMALL_STATE(46)] = 954,
  [SMALL_STATE(47)] = 964,
  [SMALL_STATE(48)] = 974,
  [SMALL_STATE(49)] = 984,
  [SMALL_STATE(50)] = 990,
  [SMALL_STATE(51)] = 1000,
  [SMALL_STATE(52)] = 1010,
  [SMALL_STATE(53)] = 1020,
  [SMALL_STATE(54)] = 1028,
  [SMALL_STATE(55)] = 1036,
  [SMALL_STATE(56)] = 1046,
  [SMALL_STATE(57)] = 1056,
  [SMALL_STATE(58)] = 1066,
  [SMALL_STATE(59)] = 1072,
  [SMALL_STATE(60)] = 1078,
  [SMALL_STATE(61)] = 1088,
  [SMALL_STATE(62)] = 1094,
  [SMALL_STATE(63)] = 1104,
  [SMALL_STATE(64)] = 1114,
  [SMALL_STATE(65)] = 1121,
  [SMALL_STATE(66)] = 1126,
  [SMALL_STATE(67)] = 1133,
  [SMALL_STATE(68)] = 1140,
  [SMALL_STATE(69)] = 1147,
  [SMALL_STATE(70)] = 1152,
  [SMALL_STATE(71)] = 1159,
  [SMALL_STATE(72)] = 1166,
  [SMALL_STATE(73)] = 1171,
  [SMALL_STATE(74)] = 1175,
  [SMALL_STATE(75)] = 1179,
  [SMALL_STATE(76)] = 1183,
  [SMALL_STATE(77)] = 1187,
  [SMALL_STATE(78)] = 1191,
  [SMALL_STATE(79)] = 1195,
  [SMALL_STATE(80)] = 1199,
  [SMALL_STATE(81)] = 1203,
  [SMALL_STATE(82)] = 1207,
  [SMALL_STATE(83)] = 1211,
  [SMALL_STATE(84)] = 1215,
  [SMALL_STATE(85)] = 1219,
  [SMALL_STATE(86)] = 1223,
  [SMALL_STATE(87)] = 1227,
  [SMALL_STATE(88)] = 1231,
  [SMALL_STATE(89)] = 1235,
  [SMALL_STATE(90)] = 1239,
  [SMALL_STATE(91)] = 1243,
  [SMALL_STATE(92)] = 1247,
  [SMALL_STATE(93)] = 1251,
  [SMALL_STATE(94)] = 1255,
  [SMALL_STATE(95)] = 1259,
  [SMALL_STATE(96)] = 1263,
  [SMALL_STATE(97)] = 1267,
  [SMALL_STATE(98)] = 1271,
  [SMALL_STATE(99)] = 1275,
  [SMALL_STATE(100)] = 1279,
  [SMALL_STATE(101)] = 1283,
  [SMALL_STATE(102)] = 1287,
  [SMALL_STATE(103)] = 1291,
  [SMALL_STATE(104)] = 1295,
  [SMALL_STATE(105)] = 1299,
  [SMALL_STATE(106)] = 1303,
  [SMALL_STATE(107)] = 1307,
  [SMALL_STATE(108)] = 1311,
  [SMALL_STATE(109)] = 1315,
  [SMALL_STATE(110)] = 1319,
  [SMALL_STATE(111)] = 1323,
  [SMALL_STATE(112)] = 1327,
  [SMALL_STATE(113)] = 1331,
  [SMALL_STATE(114)] = 1335,
  [SMALL_STATE(115)] = 1339,
  [SMALL_STATE(116)] = 1343,
  [SMALL_STATE(117)] = 1347,
  [SMALL_STATE(118)] = 1351,
  [SMALL_STATE(119)] = 1355,
  [SMALL_STATE(120)] = 1359,
  [SMALL_STATE(121)] = 1363,
  [SMALL_STATE(122)] = 1367,
  [SMALL_STATE(123)] = 1371,
  [SMALL_STATE(124)] = 1375,
  [SMALL_STATE(125)] = 1379,
  [SMALL_STATE(126)] = 1383,
  [SMALL_STATE(127)] = 1387,
  [SMALL_STATE(128)] = 1391,
  [SMALL_STATE(129)] = 1395,
  [SMALL_STATE(130)] = 1399,
  [SMALL_STATE(131)] = 1403,
  [SMALL_STATE(132)] = 1407,
  [SMALL_STATE(133)] = 1411,
  [SMALL_STATE(134)] = 1415,
  [SMALL_STATE(135)] = 1419,
  [SMALL_STATE(136)] = 1423,
  [SMALL_STATE(137)] = 1427,
  [SMALL_STATE(138)] = 1431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 3, 0, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 3, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_directive, 3, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_directive, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_directive, 3, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_directive, 3, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 4, 0, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 4, 0, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_directive, 4, 0, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_directive, 4, 0, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 4, 0, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 4, 0, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_directive, 4, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_directive, 4, 0, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_value, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_insensitive_identifier, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_modifier, 2, 0, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_modifier, 2, 0, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_insensitive_identifier, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_insensitive_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_insensitive_identifier_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 2, 0, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_property, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var_name, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 8),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var_value, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_value, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_arg_value, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 11),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ghostty(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
