/* See LICENSE file for copyright and license details. */

/* appearance */
static int topbar = 1;
static int centered = 0;
static int min_width = 300;
static const int user_bh = 0;

/* font */
static const char *fonts[] = {
	"SF Pro:style=Bold:size=12"
};

/* prompt */
static const char *prompt = NULL;

/* colors */
static const char *colors[SchemeLast][2] = {
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#222222", "#f3938e" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

/* layout */
static unsigned int lines = 0;
static const char worddelimiters[] = " ";
static unsigned int border_width = 2;
