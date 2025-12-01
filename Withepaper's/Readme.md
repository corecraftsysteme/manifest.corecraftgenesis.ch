# Forschungs‑Chain – Technische Grundlagen

Dieses Repository dokumentiert die **Forschungs‑Chain** und fasst die technischen Grundlagen in Form eines Whitepapers zusammen.  
Ziel ist es, eine transparente, reproduzierbare und audit‑freundliche Plattform für Forschung, Entwicklung und Veröffentlichung zu schaffen.

---

## 📖 Überblick

Die Forschungs‑Chain ist ein **modulares System**, das technische, organisatorische und rechtliche Akte als **Chain‑Elemente** dokumentiert.  
Jedes Element ist nachvollziehbar, append‑only und mit symbolischen Ankern versehen.

---

## ⚙️ Technische Grundlagen

### 1. Architektur
- **Core‑Layer:** Verwaltung der Blöcke, Nodes und Audit‑Timeline.
- **Data‑Layer:** Speicherung von Forschungsdaten, Metadaten und Parametern.
- **Interface‑Layer:** Frontend‑Dashboard (HTML5), Forms für Tasks, Tokens, Wallets, Billing.
- **Verification‑Layer:** Append‑only Logs, Schnellchecks (SIDCN), Audit‑Reports in JSON/YAML.

### 2. Module
- **Contribution & Distribution:** Transport von Inhalten zwischen Knoten, mit Latenz‑ und Fehlerraten‑Checks.
- **Audit‑Timeline:** Jede Aktion wird mit Zeitstempel und Hash dokumentiert.
- **Wallet & Token:** Abbildung von Ressourcen, Zugriffsrechten und Abrechnungen.
- **Voyager‑Adapter:** Einbindung externer Datenquellen (z. B. Telemetrie, PCM‑Streams) via REST/WebSocket.

### 3. Standards
- **EBU R128:** Loudness‑Metering für Audio‑Beiträge (LUFS, LRA, True‑Peak).
- **BS.1770:** K‑Weighting Filterkette für präzise Messung.
- **OSI‑konforme Lizenzen:** Alle Code‑ und Datenartefakte unter Open‑Source‑Bedingungen.
- **Append‑only Logs:** JSON/YAML‑Exports, signierte Reports mit Hash/Signature.

---

## 🔍 Whitepaper‑Zusammenfassung

- **Motivation:** Forschung braucht Transparenz, Reproduzierbarkeit und Unabhängigkeit von proprietären Plattformen.  
- **Designprinzipien:** Modularität, Audit‑Fähigkeit, symbolische Anker, offene Standards.  
- **Technische Umsetzung:**  
  - Nodes und Blocks bilden die Chain.  
  - Jeder Task erzeugt ein Audit‑Event.  
  - Datenquellen (Datei, Live‑Input, HTTP, HLS, WebRTC, Voyager) werden über Adapter eingebunden.  
  - Dashboards visualisieren Contribution/Distribution, Loudness‑Metriken und Audit‑Logs.  
- **Ergebnisse:**  
  - Vollständige Nachvollziehbarkeit aller Forschungsakte.  
  - Exportierbare Reports für Peer‑Review und Archivierung.  
  - Integration von Audio‑/Video‑Standards (EBU R128, BS.1770).  

---

## ✅ Checkliste

- [ ] Architektur dokumentiert  
- [ ] Module implementiert  
- [ ] Standards integriert  
- [ ] Audit‑Logs aktiv  
- [ ] Reports exportierbar (JSON/YAML/CSV/PNG)  
- [ ] Whitepaper veröffentlicht  

---

## 📚 Weiterführend

- `docs/whitepaper.md` – Volltext des Whitepapers  
- `docs/checklist.md` – Prüfliste für Konformität  
- `docs/endorsements.md` – Unterstützungen und Referenzen  
- `src/` – Implementierung der Chain‑Module  

---

## 📜 Lizenz

Alle Inhalte stehen unter einer **OSI‑konformen Lizenz**.  
Bitte beachte die jeweiligen Lizenzhinweise für Code, Daten und Parameter.

---
