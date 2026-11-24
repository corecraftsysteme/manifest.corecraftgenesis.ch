# Chain2025 Node Status

## Endpoint

- Host: dnsseed.corecraftgenesis.ch
- DNS target: corecraftsysteme.github.io
- Web port: 443/TCP
- Defined P2P port: 52025/TCP
- Checked: 2026-11-25 00:16:16 +01:00

## Current Status

- HTTPS endpoint: ONLINE
- Chain2025 P2P endpoint: NOT DEPLOYED
- DNS resolution: Active
- Manifest website: Published
- Public Chain2025 node: Not currently verified

## Port Definition

Chain2025 uses TCP port 52025 as its designated P2P port.

This port definition reserves a project-specific endpoint for future
Chain2025 node communication. Defining the port does not deploy a node
or open the port automatically.

## Current Architecture

The hostname currently resolves to GitHub Pages infrastructure.
GitHub Pages provides the public manifest website but does not provide
a Chain2025 P2P node service.

## Required for Node Deployment

1. Deploy a Chain2025 node implementation on a server.
2. Configure the node to listen on TCP port 52025.
3. Allow inbound TCP traffic on port 52025.
4. Point a dedicated node hostname to the server address.
5. Verify the Chain2025 protocol handshake.
6. Publish active peer addresses through the DNS-seed system.

## Configuration Reference

Node endpoint:

    dnsseed.corecraftgenesis.ch:52025

Configuration concept:

    addnode=dnsseed.corecraftgenesis.ch:52025

## Verification Results

HTTPS test:

    Status: OPEN
    Port: 443
    Duration: 428 ms

P2P test:

    Status: TIMEOUT
    Port: 52025
    Duration: 3011 ms
