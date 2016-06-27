# LightDM GTK Greeter #

## What?

A fork of the LightDM GTK Greeter package from Debian stable to fix Infobar visiblity problems on password expiration and password change situtations.

## How?

This version differs from the Debian Stable version in following ways:

* It has debug logging via gLib.
* It disables GTK animations to prevent the infobar from disappearing.
    * Actually, there's a [bug in the Infobar](https://bugzilla.gnome.org/show_bug.cgi?id=710888) implementation since 2013, but I found it after starting to work on this, and the bug needs to be fixed for production. So this can be a temporary fix until the GTK bug is fixed.
* It can show multiple messages arriving from PAM backend. If there's more than one message arriving from PAM back to back, these messages are concetanted and shown together, thus improving the usability of the LightDM GTK Greeter.
* Supports keyboard layout switching via configurable indicator.
    * Keyboard layout switcher can be enabled by adding `~keyboard-layout` to the indicators list.
    * Keyboard layouts can be configured via `keyboard-layouts=...` option.
        * Keyboards are delimited with `;` (e.g.: `keybaord-layouts=us;tr`)
        * Keyboard variants are delimited with `~` (e.g.: `keyboard-layouts=tr;tr~f;tr~alt`)
        * System default keyboard is *always* added when the indicator is enabled.
        * If the `keyboard-layout=` option is omitted or left empty, system default keyboard is added only.

## Who?

I'm Hakan Bayindir. Technical Leader and Developer of Pardus project.
