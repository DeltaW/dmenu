/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 0;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
//static const unsigned int alpha = 0xf0;
static const unsigned int alpha = 0xbf;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Liberation Mono:size=20"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                            fg         bg    */
/*	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#fdffa1", "#222222" },
	[SchemeSelHighlight]  = { "#3e95dd", "#222222" },
	[SchemeNormHighlight] = { "#3e95dd", "#222222" },
	[SchemeOut]           = { "#000000", "#00ffff" }, */
	[SchemeNorm]          = { "#ffffff", "black" },
	[SchemeSel]           = { "#fdffa1", "black" },
	[SchemeSelHighlight]  = { "#3e95dd", "black" },
	[SchemeNormHighlight] = { "#3e95dd", "black" },
	[SchemeOut]           = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 5;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;

