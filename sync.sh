#!/bin/bash

echo "🔄 Switching to main..."
git checkout main || exit 1

echo "⬇️  Fetching upstream changes..."
git fetch upstream || exit 1

echo "🔁 Merging upstream/main into main..."
git merge upstream/main || exit 1

echo "⏫ Pushing main to origin..."
git push origin main --force-with-lease || exit 1

echo "🌿 Switching to 'saikat' branch..."
git checkout saikat || exit 1

echo "🔁 Merging main into saikat..."
git merge main || exit 1

echo "🚀 Pushing updated saikat to origin..."
git push origin saikat || exit 1

echo "✅ Sync complete!"


