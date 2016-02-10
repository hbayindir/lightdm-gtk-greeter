# LightDM GTK Greeter #

## What?

A fork of the LightDM GTK Greeter package from Debian stable to fix Infobar visiblity problems on password expiration and password change situtations.

## How?

This version differs from the Debian Stable version in two ways:

* It has debug logging to syslog (currently unconfigurable, always on)
* It has a periodic function running with GTK Main Loop (period is ~200ms) and forces to infobar open if it should be visible (controlled via a global boolean variable, which in turn controlled by the `set_message_label()`).
    * Actually, there's a [bug in the Infobar](https://bugzilla.gnome.org/show_bug.cgi?id=710888) implementation since 2013, but I found it after starting to work on this, and the bug needs to be fixed for production. So this can be a temporary fix until the GTK bug is fixed.

## Who?

I'm Hakan Bayindir. Technical Leader and Developer of Pardus project.