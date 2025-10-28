int sub_51EF8()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  sub_53284(
    "internals",
    11,
    "Maintenance commands.\n"
    "Some gdb commands are provided just for use by gdb maintainers.\n"
    "These commands are subject to frequent change, and may not be as\n"
    "well documented as user commands.",
    &dword_474744);
  sub_53284("obscure", 10, "Obscure features.", &dword_474744);
  sub_53284("aliases", 8, "Aliases of other commands.", &dword_474744);
  sub_53284(
    "user-defined",
    14,
    "User-defined commands.\n"
    "The commands in this class are those defined by the user.\n"
    "Use the \"define\" command to define a command.",
    &dword_474744);
  sub_53284("support", 4, "Support facilities.", &dword_474744);
  if ( !dword_487A74 )
    sub_53284("status", 5, "Status inquiries.", &dword_474744);
  sub_53284("files", 3, "Specifying and examining files.", &dword_474744);
  sub_53284("breakpoints", 6, "Making program stop at certain points.", &dword_474744);
  sub_53284("data", 1, "Examining data.", &dword_474744);
  sub_53284(
    "stack",
    2,
    "Examining the stack.\n"
    "The stack is made up of stack frames.  Gdb assigns numbers to stack frames\n"
    "counting from zero for the innermost (currently executing) frame.\n"
    "\n"
    "At any time gdb identifies one frame as the \"selected\" frame.\n"
    "Variable lookups are done with respect to the selected frame.\n"
    "When the program being debugged stops, gdb selects the innermost frame.\n"
    "The commands below can be used to select other frames by number or address.",
    &dword_474744);
  sub_53284("running", 0, "Running the program.", &dword_474744);
  sub_539E8("pwd", 3, sub_4F078, "Print working directory.  This is used for your program as well.");
  v0 = sub_5329C(
         "cd",
         3,
         &loc_4F11C,
         "Set working directory to DIR for debugger.\n"
         "The debugger's current working directory specifies where scripts and other\n"
         "files that can be loaded by GDB are located.\n"
         "In order to change the inferior's current working directory, the recommended\n"
         "way is to use the \"set cwd\" command.",
         &dword_474744);
  sub_53274(v0, 1010984);
  sub_539E8(
    "echo",
    4,
    sub_4FA04,
    "Print a constant string.  Give string as argument.\n"
    "C escape sequences may be used in the argument.\n"
    "No newline is added at the end of the argument;\n"
    "use \"\\n\" if you want a newline to be printed.\n"
    "Since leading and trailing whitespace are ignored in command arguments,\n"
    "if you want to print some you must use \"\\\" before leading whitespace\n"
    "to be printed or after trailing whitespace.");
  sub_53514(
    "script-extension",
    4,
    off_353C80,
    &off_46B134,
    "Set mode for script filename extension recognition.",
    "Show mode for script filename extension recognition.",
    "off  == no filename extension recognition (all sourced files are GDB scripts)\n"
    "soft == evaluate script according to filename extension, fallback to GDB script\n"
    "strict == evaluate script according to filename extension, error if not supported",
    0,
    sub_4F460,
    &dword_47475C,
    &dword_47474C);
  sub_539E8(
    "quit",
    4,
    sub_4EFF4,
    "Exit gdb.\n"
    "Usage: quit [EXPR]\n"
    "The optional expression EXPR, if present, is evaluated and the result\n"
    "used as GDB's exit code.  The default is zero.");
  v1 = sub_539E8("help", 4, sub_4F9E8, "Print list of commands.");
  sub_53274(v1, 1002404);
  sub_547D8("q", "quit", 4, 1);
  sub_547D8("h", "help", 4, 1);
  sub_535E0(
    "verbose",
    4,
    &dword_48A514,
    "Set verbosity.",
    "Show verbosity.",
    0,
    &loc_244CA0,
    sub_4F42C,
    &dword_47475C,
    &dword_47474C);
  sub_53420(
    "history",
    4,
    sub_244C48,
    "Generic command for setting command history parameters.",
    &dword_474760,
    "set history ",
    0,
    &dword_47475C);
  sub_53420(
    "history",
    4,
    sub_244C88,
    "Generic command for showing command history parameters.",
    &dword_474764,
    "show history ",
    0,
    &dword_47474C);
  sub_535E0(
    "expansion",
    -1,
    &dword_48A55C,
    "Set history expansion on command input.",
    "Show history expansion on command input.",
    "Without an argument, history expansion is enabled.",
    0,
    sub_4F41C,
    &dword_474760,
    &dword_474764);
  sub_53420(
    "info",
    5,
    sub_4F978,
    "Generic command for showing things about the program being debugged.",
    &dword_474754,
    "info ",
    0,
    &dword_474744);
  sub_547D8("i", "info", 5, 1);
  sub_547D8("inf", "info", 5, 1);
  sub_539E8("complete", 10, sub_4FFB4, "List the completions for the rest of the line as a command.");
  sub_53420(
    "show",
    5,
    sub_4F924,
    "Generic command for showing things about the debugger.",
    &dword_47474C,
    "show ",
    0,
    &dword_474744);
  sub_539B4("set", sub_4F924, "Show all GDB settings.");
  sub_5329C(
    "commands",
    16,
    sub_244AF4,
    "Show the history of commands you typed.\n"
    "You can supply a command number to start with, or a `+' to start after\n"
    "the previous command number shown.",
    &dword_47474C);
  sub_5329C("version", 16, sub_4F9C8, "Show what version of GDB this is.", &dword_47474C);
  sub_5329C("configuration", 16, sub_4F9B4, "Show how GDB was configured at build time.", &dword_47474C);
  sub_5389C(
    "remote",
    -1,
    &dword_48A590,
    "Set debugging of remote protocol.",
    "Show debugging of remote protocol.",
    "When enabled, each packet sent or received with the remote target\nis displayed.",
    0,
    sub_4F40C,
    &dword_474750,
    &dword_474748);
  sub_538F4(
    "remotetimeout",
    -1,
    &dword_46DCE8,
    "Set timeout limit to wait for target to respond.",
    "Show timeout limit to wait for target to respond.",
    "This value is used to set the time limit for gdb to wait for a response\nfrom the target.",
    0,
    sub_4F3FC,
    &dword_47475C,
    &dword_47474C);
  sub_53420(
    "debug",
    -1,
    sub_4F93C,
    "Generic command for setting gdb debugging flags",
    &dword_474750,
    "set debug ",
    0,
    &dword_47475C);
  sub_53420(
    "debug",
    -1,
    sub_4F90C,
    "Generic command for showing gdb debugging flags",
    &dword_474748,
    "show debug ",
    0,
    &dword_47474C);
  v2 = sub_539E8(
         "shell",
         4,
         sub_4FC60,
         "Execute the rest of the line as a shell command.\nWith no arguments, run an inferior shell.");
  sub_53274(v2, 1010984);
  *(_DWORD *)(sub_539E8(
                "edit",
                3,
                sub_51BF4,
                "Edit specified file or function.\n"
                "With no argument, edits file containing most recent line listed.\n"
                "Editing targets can be specified in these ways:\n"
                "  FILE:LINENUM, to edit at that line in that file,\n"
                "  FUNCTION, to edit at the beginning of that function,\n"
                "  FILE:FUNCTION, to distinguish among like-named static functions.\n"
                "  *ADDRESS, to edit at the line containing that address.\n"
                "Uses EDITOR environment variable contents as editor (or ex as default).")
            + 64) = sub_F7450;
  sub_539E8(
    "list",
    3,
    sub_51388,
    "List specified function or line.\n"
    "With no argument, lists ten more lines after or around previous listing.\n"
    "\"list -\" lists the ten lines before a previous ten-line listing.\n"
    "One argument specifies a line, and ten lines are listed around that line.\n"
    "Two arguments with comma between specify starting and ending lines to list.\n"
    "Lines can be specified in these ways:\n"
    "  LINENUM, to list around that line in current file,\n"
    "  FILE:LINENUM, to list around that line in that file,\n"
    "  FUNCTION, to list around beginning of that function,\n"
    "  FILE:FUNCTION, to distinguish among like-named static functions.\n"
    "  *ADDRESS, to list around the line containing that address.\n"
    "With two args, if one is empty, it stands for ten lines away from\n"
    "the other arg.\n"
    "\n"
    "By default, when a single location is given, display ten lines.\n"
    "This can be changed using \"set listsize\", and the current value\n"
    "can be shown using \"show listsize\".");
  sub_547D8("l", "list", 3, 1);
  if ( dword_487A74 )
    sub_547D8("file", "list", 3, 1);
  v3 = sub_539E8(
         "disassemble",
         1,
         sub_4F594,
         "Disassemble a specified section of memory.\n"
         "Default is the function surrounding the pc of the selected frame.\n"
         "\n"
         "With a /m modifier, source lines are included (if available).\n"
         "This view is \"source centric\": the output is in source line order,\n"
         "regardless of any optimization that is present.  Only the main source file\n"
         "is displayed, not those of, e.g., any inlined functions.\n"
         "This modifier hasn't proved useful in practice and is deprecated\n"
         "in favor of /s.\n"
         "\n"
         "With a /s modifier, source lines are included (if available).\n"
         "This differs from /m in two important respects:\n"
         "- the output is still in pc address order, and\n"
         "- file names and contents for all relevant source files are displayed.\n"
         "\n"
         "With a /r modifier, raw instructions in hex are included.\n"
         "\n"
         "With a single argument, the function surrounding that address is dumped.\n"
         "Two arguments (separated by a comma) are taken as a range of memory to dump,\n"
         "  in the form of \"start,end\", or \"start,+length\".\n"
         "\n"
         "Note that the address is interpreted as an expression, not as a location\n"
         "like in the \"break\" command.\n"
         "So, for example, if you want to disassemble function bar in file foo.c\n"
         "you must type \"disassemble 'foo.c'::bar\" and not \"disassemble foo.c:bar\".");
  sub_53274(v3, sub_F7450);
  sub_547D8("!", "shell", 4, 0);
  v4 = sub_539E8("make", 4, sub_503F4, "Run the ``make'' program using the rest of the line as arguments.");
  sub_53274(v4, 1010984);
  sub_5329C(
    "user",
    -1,
    sub_4FA9C,
    "Show definitions of non-python/scheme user defined commands.\n"
    "Argument is the name of the user defined command.\n"
    "With no argument, show definitions of all user defined commands.",
    &dword_47474C);
  sub_539E8("apropos", 4, sub_4F470, "Search for commands matching a REGEXP");
  sub_53834(
    "max-user-call-depth",
    -1,
    &dword_474758,
    "Set the max call depth for non-python/scheme user-defined commands.",
    "Show the max call depth for non-python/scheme user-defined commands.",
    0,
    0,
    sub_4F3EC,
    &dword_47475C,
    &dword_47474C);
  sub_535E0(
    "trace-commands",
    -1,
    &dword_474768,
    "Set tracing of GDB CLI commands.",
    "Show state of GDB CLI command tracing.",
    "When 'on', each command is displayed as it is executed.",
    0,
    0,
    &dword_47475C,
    &dword_47474C);
  return sub_539E8(
           "alias",
           4,
           sub_50660,
           "Define a new command that is an alias of an existing command.\n"
           "Usage: alias [-a] [--] ALIAS = COMMAND\n"
           "ALIAS is the name of the alias command to create.\n"
           "COMMAND is the command being aliased to.\n"
           "If \"-a\" is specified, the command is an abbreviation,\n"
           "and will not appear in help command list output.\n"
           "\n"
           "Examples:\n"
           "Make \"spe\" an alias of \"set print elements\":\n"
           "  alias spe = set print elements\n"
           "Make \"elms\" an alias of \"elements\" in the \"set print\" command:\n"
           "  alias -a set print elms = set print elements");
}
