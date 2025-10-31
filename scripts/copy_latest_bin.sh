#!/bin/bash

# Go to workspace root
cd "$(dirname "$0")/.."

# Find the newest binary in bin/
NEWEST_BIN=$(ls -t bin/main_* 2>/dev/null | head -n 1)

if [ -z "$NEWEST_BIN" ]; then
    echo "❌ No binary found in bin/ folder. Build first!"
    exit 1
fi

# Copy/rename to a fixed name
cp "$NEWEST_BIN" bin/main_latest

echo "✅ main_latest updated -> $NEWEST_BIN"
